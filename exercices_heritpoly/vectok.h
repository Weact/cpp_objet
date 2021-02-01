#pragma once
#include "vect.h"

class vectok :
    public vect
{
protected:
    int taille;
public:
    vectok(int);
    vectok(const vectok& vokcpy);
    vectok operator=(vectok&);
    int getTaille() const;
};

