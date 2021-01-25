#pragma once

#include <iostream>
using namespace std;

class Cadre
{


private:
	float m_nx, m_ny;
	int m_nw, m_nh;
	char m_csymbol;

public:
	//CONSTRUCTOR
	Cadre(); //DEFAULT CONSTRUCTOR
	Cadre(float x, float y); //POSITION CUSTOM CONSTRUCTOR
	Cadre(float x, float y, int w, int h); //DIMENSIONS CUSTOM CONSTRUCTOR
	Cadre(float x, float y, int w, int h, char c); //ALL CUSTOM CONSTRUCTOR

	//DESTRUCTOR
	~Cadre();

	//SETTERS
	void setX(float x); //x
	void setY(float y); //y
	void setW(int w); //width
	void setH(int h); //height
	void setSymbol(char s); //symbol

	//GETTERS
	float getX() const; //x
	float getY() const; //y
	int getW() const; //width
	int getH() const; //height
	char getSymbol() const; //symbol

	//MEMBER METHODS
	void toString() const; //convert cadre properties to a string and return it
	int computeSurface() const; //compute cadre surface and return it
	int computePerimeter() const; //compute cadre perimeter and return it
	bool isCarre() const; //check if the cadre is a square or a rectangle, return the result
	void rotate(float t); //rotate the cadre by X degrees
};

