#define _USE_MATH_DEFINES
#include <math.h>
#include "Cadre.h"

//CONSTRUCTOR
Cadre::Cadre() { //DEFAULT CONSTRUCTOR
	this->m_nx = 10.f;
	this->m_ny = 5.f;
	this->m_nw = 5;
	this->m_nh = (2 * this->m_nw);
	this->m_csymbol = '*';
}
Cadre::Cadre(float x, float y) { //POSITION CUSTOM CONSTRUCTOR
	this->m_nx = x;
	this->m_ny = y;
	this->m_nw = 5;
	this->m_nh = (2 * this->m_nw);
	this->m_csymbol = '*';
}
Cadre::Cadre(float x, float y, int w, int h) { //DIMENSIONS CUSTOM CONSTRUCTOR
	this->m_nx = x;
	this->m_ny = y;
	this->m_nw = w;
	this->m_nh = h;
	this->m_csymbol = '*';
}
Cadre::Cadre(float x, float y, int w, int h, char s) { //ALL CUSTOM CONSTRUCTOR
	this->m_nx = x;
	this->m_ny = y;
	this->m_nw = w;
	this->m_nh = h;
	this->m_csymbol = s;
}

//DESTRUCTOR
Cadre::~Cadre() {
	cout << "Cadre has been destroyed\n";
}

//SETTERS
void Cadre::setX(float x) { //X
	this->m_nx = x;
}
void Cadre::setY(float y) { //Y
	this->m_ny = y;
}
void Cadre::setW(int w) { //W
	this->m_nw = w;
}
void Cadre::setH(int h) { //H
	this->m_nh = h;
}
void Cadre::setSymbol(char s) { //SYMBOL
	this->m_csymbol = s;
}
//GETTERS
float Cadre::getX() const { //X
	return this->m_nx;
}
float Cadre::getY() const { //Y
	return this->m_ny;
}
int Cadre::getW() const { //W
	return this->m_nw;
}
int Cadre::getH() const { //H
	return this->m_nh;
}
char Cadre::getSymbol() const{ //SYMBOL
	return this->m_csymbol;
}

//MEMBERS METHOD
void Cadre::toString() const{ //RETURN CADRE PROPERTIES AS A STRING, RETURN IT
	cout << "Cadre Coordinates [X/Y] : [" << this->getX() << " / " << this->m_ny << "];\nCadre Dimensions [W/H] : [" << this->m_nw << " / " << this->m_nh << "];\nCadre Symbol : [" << this->m_csymbol << "];" << endl;
}
int Cadre::computeSurface() const{ //COMPUTE THE SURFACE OF THE CADRE, RETURN IT
	return this->m_nw * this->m_nh;
}
int Cadre::computePerimeter() const{ //COMPUTE THE PERIMETER OF THE CADRE, RETURN IT
	return (this->m_nw * 2) + (this->m_nh * 2);
}
bool Cadre::isCarre() const{ //check if the cadre is a square or a rectangle, return the result
	return this->m_nw == this->m_nh;
	//true = square
	//false = rectangle
}
void Cadre::rotate(float t) { //rotate the cadre by X degrees
	t = t * M_PI / 180; //convert t to rad

	float n_bx, n_by, n_cx, n_cy;

	n_bx = this->m_nx + this->m_nh;
	n_by = this->m_ny + this->m_nw;

	int n_bxr = cos(t) * (n_bx - m_nx) - sin(t) * (n_by - m_ny) + n_bx;
	int n_byr = sin(t) * (n_bx - m_nx) - cos(t) * (n_by - m_ny) + n_by;

	n_cx = this->m_nx + this->m_nw;
	n_cy = this->m_ny + this->m_nh;

	int n_cxr = cos(t) * (n_cx - m_nx) - sin(t) * (n_cy - m_ny) + n_cx;
	int n_cyr = sin(t) * (n_cx - m_nx) - cos(t) * (n_cy - m_ny) + n_cy;
}