#include "Currency.h"

Currency::Currency()
{
	symbol_ = "";
	exchange_rate_ = 0.0;
}

Currency::Currency(string symbol, double exchange_rate)
{
	symbol_ = symbol;
	exchange_rate_ = exchange_rate;
}

Currency::~Currency()
{}

double Currency::ConvertFromUSD(double amount)
{
	return amount * exchange_rate_;
}

double Currency::ConvertToUSD(double amount)
{
	return amount / exchange_rate_;
}

double Currency::GetExchangeRate()
{
	return exchange_rate_;
}

void Currency::SetExchangeRate(double rate)
{
	exchange_rate_ = rate;
}