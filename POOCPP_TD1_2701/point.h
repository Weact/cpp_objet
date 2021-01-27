#pragma once
#include <iostream>
using namespace std;

class point
{
protected:
	float x;
	float y;
public:
	point(float abs = 0.f, float ord = 0.f);
	void affiche() const;
	void deplace(float dx, float dy);

	void setX(float x);
	void setY(float y);
	float getX() const;
	float getY() const;

	friend ostream& operator<<(ostream& os, const point& p);
};

