#pragma once
#include <iostream>
#include "point.h"
using namespace std;
class pointcol : public point
{
protected:
    short cl;
public:
    pointcol(int abs = 0, int ord = 0, short col = 0): point(abs, ord) {
        cl = col;
    };

    //EX116
    void identifie() {
        cout << "Je suis un point colore de couleur : " << cl << endl;
    }

    /* EX 115
    * void affiche() {
        cout << "Je suis un point colore" << endl;
        cout << "Mes coordonnees  sont : " << x << " " << y << endl;
        cout << "Ma couleur est : " << cl << endl;
    }
    */
    
};

