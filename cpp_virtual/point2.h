#pragma once
#include <iostream>
#include "base.h"
using namespace std;

class point2 : public base
{
protected:
	int x, y;
public:
	point2(int abs = 0, int ord = 0) {
		x = abs;
		y = ord;
	}

	void affiche() const{
		cout << "Je suis un point" << endl;
		cout << "Mes coordonnees : " << x << " " << y << endl;
	}
};

