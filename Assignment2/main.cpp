#include "Currency.h"
#include "CurrencyConverter.h"
#include<iostream>

using namespace std;

int main()
{
	double amount;
	cout << "Enter the amount of currency, enter 0 to exit:";
	cin >> amount;
	while (amount != 0)
	{
		cout << "Enter base currency (USD = 1/EUR = 2/GBP = 3/CAD = 4/AUD = 5/CNY = 6/JPY = 7):";
		int baseCurrency;
		cin >> baseCurrency;

		cout << "Enter foreign currency (USD = 1/EUR = 2/GBP = 3/CAD = 4/AUD = 5/CNY = 6/JPY = 7):";
		int foreignCurrency;
		cin >> foreignCurrency;

		double amountUSD = ConvertToUSD(static_cast<CurrencyType>(baseCurrency), amount);
		double amountForeign = ConvertFromUSD(static_cast<CurrencyType>(foreignCurrency), amountUSD);
		cout << "Amount in foreign: " << amountForeign << endl;

		cout << "Enter the amount of currency, enter 0 to exit:";
		cin >> amount;
	}
	return 0;
}