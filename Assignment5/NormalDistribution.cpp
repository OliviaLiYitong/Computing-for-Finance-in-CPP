#include "NormalDistribution.h"
#include <iostream>
double cdf(double x)
{
	return 0.5 * (1 + erf(x / sqrt(2)));
}

double pdf(double x)
{
	return exp(-0.5 * pow(x, 2)) / sqrt(2 * atan(1.0) * 4);
}

double UniformNoneZero()
{
	double rst = static_cast<double>(rand()) / RAND_MAX;
	while (rst == 0)
	{
		rst = static_cast<double>(rand()) / RAND_MAX;
	}
	return rst;
}

double BoxMuller()
{
	double x = UniformNoneZero();
	double y = UniformNoneZero();
	double z = sqrt(-2.0 * log(x)) * cos(2 * std::numbers::pi * y);
	return z;
}