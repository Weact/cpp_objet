#pragma once
#include <iostream>
using namespace std;

class point
{
protected:
	int x, y;
public:
	point(int abs = 0, int ord = 0) {
		x = abs; y = ord;
	}
	//friend int operator== (point, point);
	//friend point operator+(const point&, const point&);

	void setX(int x);
	void setY(int y);
	int getX() const;
	int getY() const;

	//EX116
	virtual void identifie() {
		cout << "Je suis un point" << endl;
	}

	/* EX 115
	* virtual void affiche() {
		cout << "Je suis un point" << endl;
		cout << "Mes coordonees sont : " << x << " " << y << endl;
	}
	*/

	//EX116
	void affiche() {
		identifie();
		cout << "Mes coordonees sont : " << x << " " << y << endl;
	}
	
};