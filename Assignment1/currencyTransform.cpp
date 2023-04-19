#include "currencyTransform.h"

double ConvertFromUSD(double& amount, CurrencyType foreignCurrency)
{
	double rate = 1.0;
	switch (foreignCurrency)
	{
	case EUR:
		rate = 0.88;
		break;
	case GBP:
		rate = 0.73;
		break;
	case CAD:
		rate = 1.25;
		break;
	case AUD:
		rate = 1.39;
		break;
	case CNY:
		rate = 6.77;
		break;
	case JPY:
		rate = 128.59;
		break;
	default:
		rate = 1.0;
	}
	return amount * rate;
}

double ConvertToUSD(double& amount, CurrencyType foreignCurrency)
{
	double rate = 1.0;
	switch (foreignCurrency)
	{
	case EUR:
		rate = 1 / 0.88;
		break;
	case GBP:
		rate = 1 / 0.73;
		break;
	case CAD:
		rate = 1 / 1.25;
		break;
	case AUD:
		rate = 1 / 1.39;
		break;
	case CNY:
		rate = 1 / 6.77;
		break;
	case JPY:
		rate = 1 / 128.59;
		break;
	default:
		rate = 1.0;
	}
	return amount * rate;
}
