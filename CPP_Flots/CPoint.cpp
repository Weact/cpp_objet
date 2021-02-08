#include "CPoint.h"

void CPoint::setX(int nx)
{
	x = nx;
}
void CPoint::setY(int ny)
{
	y = ny;
}
float CPoint::getX() {
	return x;
}
float CPoint::getY() {
	return y;
}

std::ostream& operator<<(std::ostream& os, const CPoint& pt)
{
	return os << "<Point x, Point y> : <" << pt.x << " , " << pt.y << ">";
}

std::istream& operator>>(std::istream& is, CPoint& pt)
{
	cout << "Point X new Coordinate : ";
	is >> pt.x;
	cout << endl;
	cout << "Point Y new Coordinate : ";
	is >> pt.y;
	cout << endl;

	return is;
}
