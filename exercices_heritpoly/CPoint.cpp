#include "CPoint.h"

CPoint::CPoint(int x, int y)
{
    this->x = x;
    this->y = y;
}

int operator==(CPoint a, CPoint b)
{
    return a.x == b.x && a.y == b.y;
}

CPoint operator+(const CPoint& a, const CPoint& b)
{
    CPoint r(0,0);
    r.setX(a.getX() + b.getX());
    r.setY(a.getY() + b.getY());
    return r;
}

void CPoint::setX(int x) {
    this->x = x;
}
void CPoint::setY(int y) {
    this->y = y;
}
int CPoint::getX() const{
    return this->x;
}
int CPoint::getY() const{
    return this->y;
}

void CPoint::affiche() const
{
    cout << "x:" << this->getX() << endl << "y:" << this->getY() << endl;
}
