#include "pointcoltwo.h"

pointcoltwo::pointcoltwo(float x, float y, int col)
{
	this->pt.setX(x);
	this->pt.setY(y);
	this->col = col;
}

void pointcoltwo::affiche() const
{
	cout << "[pointcoltwo::affiche()] COORDINATES : " << pt.getX() << " " << pt.getY() << " COLOR : " << this->col << endl;
}

void pointcoltwo::setX(float x)
{
	this->pt.setX(x);
}
void pointcoltwo::setY(float y)
{
	this->pt.setY(y);
}
float pointcoltwo::getX() const
{
	return this->pt.getX();
}
float pointcoltwo::getY() const
{
	return this->pt.getY();
}

void pointcoltwo::deplace(float dx, float dy)
{
	this->pt.setX(pt.getX() + dx);
	this->pt.setY(pt.getY() + dy);
}

void pointcoltwo::setColor(int col)
{
	this->col = col;
}
int pointcoltwo::getColor() {
	return this->col;
}

ostream& operator<<(ostream& os, const pointcoltwo& pc)
{
	os << "[pointcoltwo::operator<<] COORDINATES : " << pc.getX() << " " << pc.getY() << " COLOR : " << pc.col << endl;
	return os;
}
