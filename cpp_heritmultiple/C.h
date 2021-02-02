#pragma once
#include <iostream>
#include "A.h"
using namespace std;
class C: virtual public A /*public B, EN COMMENTAIRE POUR EX3*/
{
	/*int n;
	int p; EN COMMENTAIRE POUR LEX 3*/

	//ex3
	int nc;
public:
	//C(int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) :A(n1), B(v) //ex1
	//C(int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) :B(v) //ex2
	//C(int nn=2): A(2*nn+1) //ex3
	
	C(int nn = 2){
		nc = nn;
		cout << " ** construction objet C : " << nc << endl;
	}
	
};

