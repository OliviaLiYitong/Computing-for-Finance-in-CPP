#pragma once
#include "Currency.h"

enum CurrencyType { USD = 1, EUR = 2, GBP = 3, CAD = 4, AUD = 5, CNY = 6, JPY = 7 };

double ConvertFromUSD(int CurrencyType, double amount);
double ConvertToUSD(int CurrencyType, double amount);