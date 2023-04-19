// Assignment 3
// Change 2, 3, 4, 5, 6, 7, 9 are made
#include "Currency.h"
#include "CurrencyFactory.h" // Change 2, use factory
#include<iostream>

using namespace std;

int main()
{
	// Test for assignment operator
	Currency c1("USD", 1.0);
	Currency c2;
	Currency c3;
	c3 = c2 = c1;


	// Factor
	CurrencyFactory factory;
	double amount;
	cout << "Enter the amount of currency, enter 0 to exit:";
	cin >> amount;
	while (amount != 0)
	{
		cout << "Enter base currency (USD, EUR, GBP, CAD, AUD, CNY, JPY):";
		string base;
		cin >> base;
		cout << "Enter foreign currency (USD, EUR, GBP, CAD, AUD, CNY, JPY):";
		string foreign;
		cin >> foreign;
		shared_ptr<Currency> baseCurrency;
		shared_ptr<Currency> foreignCurrency;
		try
		{
			baseCurrency = factory.GetCurrency(base);
			foreignCurrency = factory.GetCurrency(foreign);
		}
		catch (const runtime_error& e)
		{
			// handle error
			cout << e.what() << endl;
		}
		cout << "base: " << (*baseCurrency) << endl;// << ", foreign: " << *foreignCurrency << endl;
		double amountUSD = baseCurrency->ConvertToUSD(amount);
		double amountForeign = foreignCurrency->ConvertFromUSD(amountUSD);
		cout << "Amount in foreign: " << amountForeign << endl;

		cout << "Enter the amount of currency, enter 0 to exit:";
		cin >> amount;
	}
	return 0;
}