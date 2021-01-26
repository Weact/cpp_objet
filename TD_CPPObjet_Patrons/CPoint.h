#pragma once

#include <iostream>
using namespace std;

class CPoint
{

protected:
	float m_fX, m_fY; // MEMBERS VARIABLES
	char* m_strType;

public:
	CPoint(); //CONSTRUCTOR DEFAULT
	CPoint(float x, float y); //CUSTOM CONSTRUCTOR
	CPoint(float m_fX, float m_fY, string m_strType);
	~CPoint();


	//SETTERS
	void setX(float x);
	void setY(float x);
	//GETTERS
	float getX() const;
	float getY() const;
	//MEMBER METHODS
	void toString() const;
	void affiche() const;

	//OPERATORS

	friend ostream& operator<<(ostream& os, const CPoint& pt);
	int operator<(CPoint);
	int operator>(CPoint);
	CPoint operator+(CPoint);
	CPoint operator-(CPoint);
	CPoint operator*(CPoint);
	CPoint operator/(CPoint);
};
