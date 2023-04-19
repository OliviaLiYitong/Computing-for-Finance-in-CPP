#pragma once
#include <string>
#include <iostream>

using namespace std;

class Currency
{
public:
	Currency();
	Currency(string symbol, double rate);
	Currency(const Currency& other);

	friend ostream& operator << (ostream& os, const Currency& c);

	~Currency();
	Currency& operator=(const Currency& other);

	double GetExchangeRate();
	void SetExchangeRate(double rate);

	double ConvertFromUSD(double value);
	double ConvertToUSD(double value);
private:
	string symbol_;
	double exchange_rate_;
};