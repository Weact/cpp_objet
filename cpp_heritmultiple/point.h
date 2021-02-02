#pragma once
#include <iostream>
using namespace std;

class point
{
	int x, y;
public:
	point(int abs = 0, int ord = 0) { x = abs; y = ord; }
	~point() { cout << "Un point a ete detruit" << endl; }
	void affiche(){ cout << "Coordonnees : " << x << " " << y << endl; }

	int setX(int nx) { x = nx; }
	int setY(int ny) { y = ny; }
	int getX() const { return x; }
	int getY() const { return y; }
};

