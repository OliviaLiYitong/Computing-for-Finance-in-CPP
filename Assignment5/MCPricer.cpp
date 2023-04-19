#include "MCPricer.h"
#include <iostream>

double MCPricer::Price(const Option& option,
	double stockPrice, double vol, double rate,
	unsigned long paths)
{
	double T = option.GetTimeToExpiration();
	double optionPrice;
	double payoffSum = 0; //unsigned long payoffSum = 0;
	srand(325);
	for (unsigned int i = 0; i < paths; ++i)
	{
		// generate random number
		double z_i = BoxMuller();
		// generate stock price
		double expirationStockPrice = stockPrice * exp((rate - pow(vol, 2) / 2) * T + vol * sqrt(T) * z_i);
		double payoff = option.GetExpirationPayoff(expirationStockPrice);
		payoffSum += payoff;
	}
	optionPrice = payoffSum * exp(-rate * T) / paths;
	return optionPrice;
}
