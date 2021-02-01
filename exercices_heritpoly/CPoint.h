#pragma once

#include <iostream>
using namespace std;

class CPoint
{
protected:
	int x, y;
public:
	CPoint(int = 0, int = 0);
	friend int operator== (CPoint, CPoint);
	friend CPoint operator+(const CPoint&, const CPoint&);

	void setX(int x);
	void setY(int y);
	int getX() const;
	int getY() const;

	void affiche() const;
};

