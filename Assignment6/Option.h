#pragma once
#include <math.h>
#include "NormalDistribution.h"
class Option
{
public:
	Option(double K, double T);
	virtual double Price(double S0, double r, double v) const = 0;
	virtual double GetExpirationPayoff(double ST) const = 0;
	virtual double GetIntermediatePayoff(double ST, double discountedExpectedPayoff) const = 0;
	double GetTimeToExpiration() const;
protected:
	double d1(double S0, double r, double v) const;
	double d2(double S0, double r, double v) const;

	double K_;
	double T_;
};
