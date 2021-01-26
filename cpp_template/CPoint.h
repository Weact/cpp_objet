#pragma once

#include <iostream>
using namespace std;


class CPoint
{

private:
	float m_fX, m_fY;

public:
	CPoint();
	CPoint(float x, float y);
	~CPoint();

	void setX(float x);
	void setY(float x);

	float getX() const;
	float getY() const;

	void toString() const;

	friend ostream& operator<<(ostream& os, const CPoint& pt);
	int operator<(CPoint);
	int operator>(CPoint);
};
