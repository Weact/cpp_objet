#include "CPoint.h"

CPoint::CPoint() {
	this->m_fX = 2.f;
	this->m_fY = 5.f;
}
CPoint::CPoint(float x, float y) {
	this->m_fX = x;
	this->m_fY = y;
}
CPoint::~CPoint() {
	cout << "A Point has been Destroyed !" << endl;
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
	cout << "POINT COORDINATES : [X/Y] " << this->getX() << " / " << this->getY() << "]" << endl;
}

int CPoint::operator<(CPoint pt)
{
	return this->getX() * this->getX() + this->getY() * this->getY() < pt.getX() * pt.getX() + pt.getY() * pt.getY();
}

int CPoint::operator>(CPoint pt)
{
	return this->getX() * this->getX() + this->getY() * this->getY() > pt.getX() * pt.getX() + pt.getY() * pt.getY();
}

ostream& operator<<(ostream& os, const CPoint& pt)
{
	return cout << &pt << endl;
}
