#include "ens_heter.h"

ens_heter::ens_heter(int n)
{
	init();
	adr = new base * [nelem = n];
}

ens_heter::~ens_heter()
{
	delete adr;
}

void ens_heter::ajoute(base* obj)
{
	if (celem <= nelem) {
		adr[celem] = obj;
		celem++;
	}
	else {
		cout << "Out of range exception" << endl;
	}
}

bool ens_heter::appartient(base* obj)
{
	for (int i = 0; i < nelem; i++) {
		if (obj == adr[i]) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

int ens_heter::cardinal()
{
	return nelem;
}

void ens_heter::init()
{
	cursor = 0;
	celem = 0;
}

base& ens_heter::suivant()
{
	if (cursor >= nelem) {
		cout << "Out of range exception" << endl;
		return *adr[0];
	}
	cursor++;
	return *adr[cursor -1];
}

bool ens_heter::existe()
{
	return (cursor < nelem);
}

void ens_heter::liste()
{
	cout << "Elements : " << endl;
	while (existe()) {
		suivant().affiche();
	}
}
