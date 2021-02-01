#pragma once
#include <iostream>
using namespace std;
class int2d
{
protected:
	int* adv;
	int nlig;
	int ncol;

public:
	int2d(int nl = 10, int nc = 10);
	~int2d();
	int& operator()(int, int);
};

