#include "EuropeanCall.h"
#include "EuropeanPut.h"
#include <iostream>
using namespace std;
int main()
{
	EuropeanCall c0 = EuropeanCall(100, 1);
	cout << "European Call:" << endl;
	cout << "Price: " << c0.Price(100, 0.05, 0.3) << "; ";
	cout << "Delta: " << c0.delta(100, 0.05, 0.3) << "; ";
	cout << "Gamma: " << c0.gamma(100, 0.05, 0.3) << "." << endl;

	EuropeanPut c1 = EuropeanPut(120, 2);
	cout << "European Put:" << endl;
	cout << "Price: " << c1.Price(120, 0.1, 0.4) << "; ";
	cout << "Delta: " << c1.delta(120, 0.1, 0.4) << "; ";
	cout << "Gamma: " << c1.gamma(120, 0.1, 0.4) << "." << endl;
	return 0;
}