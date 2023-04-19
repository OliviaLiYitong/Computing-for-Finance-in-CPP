#pragma once
#include "Option.h"

class EuropeanCall: public Option
{
public:
	EuropeanCall(double K, double T);
	double Price(double S0, double r, double v) const override;
	double GetExpirationPayoff(double ST) const override;
	double delta(double S0, double r, double v);
	double gamma(double S0, double r, double v);
};
