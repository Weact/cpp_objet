#pragma once
#include <iostream>
using namespace std;
class vect
{
protected:
	int nelem; //nombre d'�l�ments
	int* adr; // adresse zone dynamique contenant les �l�ments
public:
	vect(int); //constructeur (pr�cise la taille duvecteur)
	~vect(); //destructeur
	int& operator [] (int); //acc�s � un �l�ment par son "indice"
};