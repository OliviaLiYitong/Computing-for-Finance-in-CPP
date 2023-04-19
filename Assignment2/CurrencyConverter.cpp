#include "CurrencyConverter.h"
#include "Currency.h"

double ConvertFromUSD(int currencyType, double amount)
{
	double rate = 1.0;
	double foreignAmount = 0;
	switch (currencyType)
	{
	case EUR:
	{
		Currency eur("EUR", 0.88);
		foreignAmount = eur.ConvertFromUSD(amount);
		break;
	}
	case GBP:
	{
		Currency gbp("GBP", 0.73);
		foreignAmount = gbp.ConvertFromUSD(amount);
		break;
	}
	case CAD:
	{
		Currency cad("CAD", 1.25);
		foreignAmount = cad.ConvertFromUSD(amount);
		break;
	}
	case AUD:
	{
		Currency aud("AUD", 1.39);
		foreignAmount = aud.ConvertFromUSD(amount);
		break;
	}
	case CNY:
	{
		Currency cny("CNY", 6.77);
		foreignAmount = cny.ConvertFromUSD(amount);
		break;
	}
	case JPY:
	{
		Currency jpy("JPY", 128.59);
		foreignAmount = jpy.ConvertFromUSD(amount);
		break;
	}
	default:
	{
		foreignAmount = amount;
	}
	}
	return foreignAmount;
}


double ConvertToUSD(int currencyType, double amount)
{
	double rate = 1.0;
	double foreignAmount = 0;
	switch (currencyType)
	{
	case EUR:
	{
		Currency eur("EUR", 0.88);
		foreignAmount = eur.ConvertToUSD(amount);
		break;
	}
	case GBP:
	{
		Currency gbp("GBP", 0.73);
		foreignAmount = gbp.ConvertToUSD(amount);
		break;
	}
	case CAD:
	{
		Currency cad("CAD", 1.25);
		foreignAmount = cad.ConvertToUSD(amount);
		break;
	}
	case AUD:
	{
		Currency aud("AUD", 1.39);
		foreignAmount = aud.ConvertToUSD(amount);
		break;
	}
	case CNY:
	{
		Currency cny("CNY", 6.77);
		foreignAmount = cny.ConvertToUSD(amount);
		break;
	}
	case JPY:
	{
		Currency jpy("JPY", 128.59);
		foreignAmount = jpy.ConvertToUSD(amount);
		break;
	}
	default:
	{
		foreignAmount = amount;
	}
	}
	return foreignAmount;
}
