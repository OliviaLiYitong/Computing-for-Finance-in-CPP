#pragma once
#include "Option.h"

class EuropeanPut: public Option
{
public:
	EuropeanPut(double K, double T);
	double Price(double S0, double r, double v) override;
	double delta(double S0, double r, double v) override;
	double gamma(double S0, double r, double v) override;
};
