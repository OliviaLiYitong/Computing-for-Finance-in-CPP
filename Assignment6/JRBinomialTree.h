#pragma once
#include "Option.h"
#include <vector>
using namespace std;
struct Node
{
	double S;
	double C;
};

class JRBinomialTree
{
public:
	JRBinomialTree(double S0, double rate, double vol, double expiry, int steps);
	double Price(const Option& option);
	void buildTree();

private:
	using Tree = vector<vector<Node>>;
	Tree tree_;
};