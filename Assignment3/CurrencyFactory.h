#pragma once
#include "Currency.h"
#include <map>
enum CurrencyType { USD = 0, EUR = 1, GBP = 2, CAD = 3, AUD = 4, CNY = 5, JPY = 6 };
class CurrencyFactory
{
public:
	CurrencyFactory();
	~CurrencyFactory();
	shared_ptr<Currency> GetCurrency(string currencyType);
private:
	map<string, shared_ptr<Currency>> currencies_; // Change 6, using map
	// Currency* currencies_[7]; // Change 3, container
};
