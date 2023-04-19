#include "MCPricer.h"
#include "EuropeanCall.h"
#include "EuropeanPut.h"
#include <iostream>
using namespace std;

int main()
{
	// MCPricer mc;
	double S0 = 100;
	double vol = 0.3;
	double rate = 0.01;
	double T = 2;
	double K = 100;
	unsigned long M1 = 10000; // 100000, 1000000
	unsigned long M2 = 100000; // 100000, 1000000
	unsigned long M3 = 1000000; // 100000, 1000000
	MCPricer pricer;
	EuropeanCall call(K, T);
	EuropeanPut put(K, T);
	cout << "Call Price:" << endl;
	cout << "10000   simulation result is " << pricer.Price(call, S0, vol, rate, M1) << endl;
	cout << "100000  simulation result is " << pricer.Price(call, S0, vol, rate, M2) << endl;
	cout << "1000000 simulation result is " << pricer.Price(call, S0, vol, rate, M3) << endl;
	cout << "Put Price:" << endl;
	cout << "10000   simulation result is " << pricer.Price(put, S0, vol, rate, M1) << endl;
	cout << "100000  simulation result is " << pricer.Price(put, S0, vol, rate, M2) << endl;
	cout << "1000000 simulation result is " << pricer.Price(put, S0, vol, rate, M3) << endl;
	return 0;
}