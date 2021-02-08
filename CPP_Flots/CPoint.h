#pragma once
#include <iostream>
using namespace std;

class CPoint
{
protected:
	float x, y;
public:
	CPoint(float abs = 0, float ord = 0) {
		x = abs;
		y = ord;
	}
	CPoint(CPoint& cpy) {
		x = cpy.x;
		y = cpy.y;
	}

	void setX(int nx);
	void setY(int ny);
	float getX();
	float getY();

	//Surcharge flux de sortie (cout)
	friend ostream& operator<<(std::ostream& os, const CPoint& pt);

	//Surcharge flux entrée (cin) 
	friend istream& operator>>(std::istream& is, CPoint& pt);
};

