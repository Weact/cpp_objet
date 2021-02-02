#pragma once
#include <iostream>
using namespace std;
class A
{
	//int n;
	//float x; EN COMMENTAIRE POUR LEX 3
	int na;
public:
	/*A(int p = 2)*/
	A(int nn = 1) {
		//n = p;
		//x = 1; EN COMMENTAIRE POUR LEX 3
		na = nn;
		cout << " ** construction objet A : " << na << endl;
	}
};

