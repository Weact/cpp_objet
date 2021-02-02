#include "liste_point.h"

liste_point::liste_point() :liste() {

}

point* liste_point::premier()
{
	element* p = this->debut;
	return static_cast<point*>(p->contenu);
}

point* liste_point::prochain()
{
	return static_cast<point*>(liste::prochain());
}
