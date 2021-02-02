#include "liste.h"

liste::liste()
{
	debut = nullptr;
	position = 0;
	taille++;
}
liste::~liste()
{
	delete debut;
}
void liste::ajoute(void* a)
{
	element* elem = new element;
	elem->suivant = debut;
	elem->contenu = a;

	this->debut = elem;
}

void* liste::premier() {
	position = 0;
	return this->debut->contenu;
}

void* liste::prochain()
{
	int i = 0;
	position++;
	element* elem = debut;
	while (i < position) {
		if (!fini()) {
			elem = elem->suivant;
			i++;
		}
		else {
			return elem->contenu;
		}
	}
	return elem->contenu;
}

bool liste::fini()
{
	int i = 0;
	element* elem = debut;
	while (elem->suivant != nullptr) {
		elem = elem->suivant;
		i++;
	}
	return (position == i);
}

int liste::getTaille() {
	return taille;
}
