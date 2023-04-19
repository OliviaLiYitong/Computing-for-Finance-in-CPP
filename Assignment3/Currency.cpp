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
{
	// cout << "Destructor of Currency called" << endl;
}

Currency::Currency(const Currency& other)
{
	symbol_ = other.symbol_;
	exchange_rate_ = other.exchange_rate_;
}

Currency& Currency::operator=(const Currency& other)
{
	if (this != &other)
	{
		symbol_ = other.symbol_;
		exchange_rate_ = other.exchange_rate_;
	}
	return *this;
}

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

ostream& operator << (ostream& os, const Currency& c)
{
	os << c.symbol_ << ":" << c.exchange_rate_;
	return os;
}