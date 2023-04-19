#pragma once
enum CurrencyType { USD = 1, EUR = 2, GBP = 3, CAD = 4, AUD = 5, CNY = 6, JPY = 7 };

double ConvertFromUSD(double& amount, CurrencyType foreignCurrency);

double ConvertToUSD(double& amount, CurrencyType foreignCurrency);
