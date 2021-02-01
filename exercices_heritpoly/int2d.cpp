#include "int2d.h"

int2d::int2d(int nl, int nc)
{
    this->nlig = nl;
    this->ncol = nc;

    this->adv = new int[nl * nc];

    for (int i = 0; i < nl * nc; i++) {
        adv[i] = 0;
    }
}

int2d::~int2d()
{
    delete adv;
}

//Fonctions membres
int& int2d::operator()(int i, int j) //retourne elementde type classe
{
    if (i < 0 || i >= nlig) {
        i = 0;
    }
    if (j < 0 || j >= ncol) {
        j = 0;
    }

    return *(adv + i * ncol + j);
}