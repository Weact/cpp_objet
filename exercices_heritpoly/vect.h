#pragma once
#include <iostream>
using namespace std;
class vect
{
protected:
	int nelem; //nombre d'éléments
	int* adr; // adresse zone dynamique contenant les éléments
public:
	vect(int n = 10); //constructeur (précise la taille du vecteur)
	~vect(); //destructeur
	int& operator [] (int); //accès à un élément par son "indice"
};