#include "vect.h"

vect::vect(int n)
{
	this->adr = new int[nelem = n];
}

vect::~vect()
{
	delete adr;
}

int& vect::operator[](int i)
{
	if (i >= 0 && i < nelem) {
		return adr[i];
	}
	else {
		cout << "Out of range" << endl;
		return adr[0];
	}
}