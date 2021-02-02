#pragma once
#include <iostream>
#include "liste.h"
#include "point.h"
using namespace std;
class liste_point :
    public liste, public point
{
public:
    liste_point();
    point* premier();
    point* prochain();

    void affiche(){
        point* pt = premier();
        pt->affiche();
        while (!fini())
        {
            pt = prochain();
            pt->affiche();
        }
    };

};

