#include "point.h"


point::point(float abs, float ord)
{
    this->x = abs;
    this->y = ord;
}

void point::affiche() const
{
    cout << "[point::affiche()] Coordinates : " << x << " " << y << endl;
}


void point::deplace(float dx, float dy)
{
    this->x += dx;
    this->y += dy;
}

void point::setX(float x)
{
    this->x = x;
}
void point::setY(float y)
{
    this->y = y;
}
float point::getX() const
{
    return this->x;
}
float point::getY() const
{
    return this->y;
}

ostream& operator<<(ostream& os, const point& p)
{
    os << "[point::operator<<] POINT COORDINATES : " << p.x << " " << p.y << endl;
    return os;
}
