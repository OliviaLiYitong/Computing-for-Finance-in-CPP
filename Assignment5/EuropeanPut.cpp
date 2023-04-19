#include "EuropeanPut.h"

EuropeanPut::EuropeanPut(double K, double T) : Option(K, T) {}

double EuropeanPut::Price(double S0, double r, double v) const
{
	return -S0 * cdf(-d1(S0, r, v)) + K_ * exp(-r * T_) * cdf(-d2(S0, r, v));
}

double EuropeanPut::delta(double S0, double r, double v)
{
	return cdf(d1(S0, r, v)) - 1;
}

double EuropeanPut::gamma(double S0, double r, double v)
{
	return pdf(d1(S0, r, v)) / S0 / v / sqrt(T_);
}

double EuropeanPut::GetExpirationPayoff(double ST) const
{
	if (K_ > ST)
	{
		return K_ - ST;
	}
	return 0;
}