#include "CurrencyFactory.h"
CurrencyFactory::CurrencyFactory()
{
	currencies_["EUR"] = make_shared<Currency>("EUR", 0.88); // Change 9, shared pointer
	currencies_["GBP"] = make_shared<Currency>("GBP", 0.73);
	currencies_["CAD"] = make_shared<Currency>("CAD", 1.25);
	currencies_["AUD"] = make_shared<Currency>("AUD", 1.39);
	currencies_["CNY"] = make_shared<Currency>("CNY", 6.77);
	currencies_["JPY"] = make_shared<Currency>("JPY", 128.59);
	currencies_["USD"] = make_shared<Currency>("USD", 1.0);
}

CurrencyFactory::~CurrencyFactory()
{
	/*
	for (auto iter = currencies_.begin(); iter != currencies_.end(); ++iter)
	{
		delete iter->second;
	}
	*/

}

shared_ptr<Currency> CurrencyFactory::GetCurrency(string currencyType)
{
	auto iter = currencies_.find(currencyType);
	if (iter == currencies_.end())
	{
		throw runtime_error("Currency not found"); // Change 7, using exceptions
	}
	return iter->second;
}
