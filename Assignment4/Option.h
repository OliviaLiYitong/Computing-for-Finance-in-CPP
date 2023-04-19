#pragma once
#include <math.h>
#include "NormalDistribution.h"
class Option
{
public:
	Option(double K, double T);
	virtual double Price(double S0, double r, double v) = 0;
	virtual double delta(double S0, double r, double v) = 0;
	virtual double gamma(double S0, double r, double v) = 0;
protected:
	double d1(double S0, double r, double v);
	double d2(double S0, double r, double v);

	double K_;
	double T_;
};
