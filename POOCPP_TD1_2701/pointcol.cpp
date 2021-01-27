#include "pointcol.h"

void pointcol::affiche() const
{
	point::affiche();
	cout << "[pointcol::affiche()] POINT COLOR : " << this->col << endl;
}

void pointcol::setColor(int col)
{
	this->col = col;
}
int pointcol::getColor() {
	return this->col;
}

ostream& operator<<(ostream& os, const pointcol& pc)
{
	os << "[pointcol::operator<<] COORDINATES : " << pc.x << " " << pc.y << " COLOR : " << pc.col << endl;
	return os;
}