#include "point.h"
/*
point::point(int x, int y)
{
    this->x = x;
    this->y = y;
}
*/
/*
int operator==(point a, point b)
{
    return a.x == b.x && a.y == b.y;
}

point operator+(const point& a, const point& b)
{
    point r(0, 0);
    r.setX(a.getX() + b.getX());
    r.setY(a.getY() + b.getY());
    return r;
}
*/
void point::setX(int x) {
    this->x = x;
}
void point::setY(int y) {
    this->y = y;
}
int point::getX() const {
    return this->x;
}
int point::getY() const {
    return this->y;
}
/*
void point::affiche() const
{
    cout << "x:" << this->getX() << endl << "y:" << this->getY() << endl;
}
*/