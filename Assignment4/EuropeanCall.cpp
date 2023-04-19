#include "EuropeanCall.h"

EuropeanCall::EuropeanCall(double K, double T) : Option(K, T){}

double EuropeanCall::Price(double S0, double r, double v)
{
	return S0 * cdf(d1(S0, r, v)) - K_ * exp(-r * T_) * cdf(d2(S0, r, v));
}

double EuropeanCall::delta(double S0, double r, double v)
{
	return cdf(d1(S0, r, v));
}

double EuropeanCall::gamma(double S0, double r, double v)
{
	return pdf(d1(S0, r, v)) / S0 / v / sqrt(T_);
}
