#pragma once
#include "Option.h"
#include "NormalDistribution.h"
class MCPricer
{
public:
	double Price(const Option& option,
		double stockPrice, double vol, double rate,
		unsigned long paths);

private:

};
