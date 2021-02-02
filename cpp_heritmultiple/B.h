#pragma once
#include <iostream>
using namespace std;
class B //ex3
{
	/*int n;
	float y; EN COMMENTAIRE POUR LEX 3*/
	float xb;
public:
	//B(float v = 0.0) {EN COMMENTAIRE POUR LEX 3
	B(float xx=0.0){
		//n = 1;
		//y = v;
		xb = xx;
		cout << " **construction objet B : " << xb << endl;
	}
};

