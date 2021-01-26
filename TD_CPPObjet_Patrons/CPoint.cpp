#include "CPoint.h"

CPoint::CPoint() {
	this->m_fX = 2.f;
	this->m_fY = 5.f;
	this->m_strType = new char[100];
}
CPoint::CPoint(float x, float y) {
	this->m_fX = x;
	this->m_fY = y;
	this->m_strType = new char[100];
}
CPoint::CPoint(float m_fX, float m_fY, string m_strType): m_fX(m_fX), m_fY(m_fY)
{
	this->m_strType = new char[100];
	strcpy_s(this->m_strType, 100, const_cast<char*>(m_strType.c_str()));
}
CPoint::~CPoint() {
}

void CPoint::setX(float x) {
	this->m_fX = x;
}
void CPoint::setY(float y) {
	this->m_fY = y;
}

float CPoint::getX() const {
	return this->m_fX;
}
float CPoint::getY() const {
	return this->m_fY;
}

void CPoint::toString() const {
	cout << "POINT COORDINATES : [X/Y] [" << this->getX() << " / " << this->getY() << "]" << endl;
}

void CPoint::affiche() const
{
	cout << "x : " << m_fX << endl;
	cout << "y : " << m_fY << endl;
	cout << "strType : " << m_strType << endl;
}

int CPoint::operator<(CPoint pt)
{
	return this->getX() * this->getX() + this->getY() * this->getY() < pt.getX() * pt.getX() + pt.getY() * pt.getY();
}

int CPoint::operator>(CPoint pt)
{
	return this->getX() * this->getX() + this->getY() * this->getY() > pt.getX() * pt.getX() + pt.getY() * pt.getY();
}

CPoint CPoint::operator+(CPoint pt)
{
	this->setX(m_fX + pt.getX());
	this->setY(m_fY + pt.getY());

	return *this;
}

CPoint CPoint::operator-(CPoint pt)
{
	this->setX(m_fX - pt.getX());
	this->setY(m_fY - pt.getY());

	return *this;
}
CPoint CPoint::operator*(CPoint pt)
{
	this->setX(m_fX * pt.getX());
	this->setY(m_fY * pt.getY());

	return *this;
}
CPoint CPoint::operator/(CPoint pt)
{
	this->setX(m_fX / pt.getX());
	this->setY(m_fY / pt.getY());

	return *this;
}

ostream& operator<<(ostream& os, const CPoint& pt)
{
	return cout << &pt << endl;
}
