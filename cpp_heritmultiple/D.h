#pragma once
#include <iostream>
#include "B.h"
#include "C.h"

using namespace std;

class D : public B, public C
{
	int nd;
public:
	D(int n1, int n2, float x): B(x), C(n1), A(2*n1+1){
		nd = n2;
		cout << " **construction objet D " << nd << endl;
	}
};

