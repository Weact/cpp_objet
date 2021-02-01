#include "vectok.h"

vectok::vectok(int t) : vect(t) { taille = t; }

vectok::vectok(const vectok& vokcpy): vect(vokcpy)
{
	taille = vokcpy.nelem;
	adr = new int[nelem = vokcpy.nelem];

	for (int i = 0; i < vokcpy.nelem; i++) {
		adr[i] = vokcpy.adr[i];
	}
}

vectok vectok::operator=(vectok& v)
{
	delete this->adr;
	this->adr = new int[v.nelem];
	for (int i = 0; i < v.nelem; i++) {
		this->adr[i] = v.adr[i];
	}

	return *this;
}

int vectok::getTaille() const {
	return this->taille;
}
