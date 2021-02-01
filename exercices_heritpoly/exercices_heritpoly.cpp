#include <iostream>
#include "CPoint.h"
#include "CPointcol.h"
#include "int2d.h"
#include "int2db.h"
#include "vect.h"
#include "vectok.h"

using namespace std;

void affiche_exercice_105_a();
void affiche_exercice_105_b();
void affiche_exercice_107();
void affiche_exercice_108();

CPoint p(1, 3);
CPoint p2(3, 3);
CPointcol pA(3, 4, 255);
CPointcol pB(3, 4, 255);
CPoint p3(0, 0);

int2db tabi2d(0, 3, 0, 5);

int main()
{
    affiche_exercice_105_a();
    affiche_exercice_105_b();
    affiche_exercice_107();
    affiche_exercice_108();
}

void affiche_exercice_105_a(){
    cout << endl;
    cout << "#### EX 105 A ####";
    cout << endl;
    if (pA == pB) { //Correct, puisqu'on peut trouver la surcharge de l'opérateur == dans la classe CPoint (pA et pB sont filles de la classe CPoint)
        //affiche :
        cout << "Les deux points col sont egaux" << endl;
        //Puisque pA et pB valent {0,0}
    }
    if (pA == p) { //Correct, puisque pA est fille de la classe CPoint, on peut les comparer. Si pA(1,2,255) et p(1,2), alors on affiche
        cout << "Le point col est egal au point" << endl;
    }
    if (p == pA) { //pareil que la ligne 16
        cout << "Le point est egal au point col" << endl;
    }
    if (pA == 5) { //Incorrect
        cout << "Le point col est egal a 5" << endl;
    }
    if (5 == pA) { //Incorrect
        cout << "5 est egal au point col" << endl;
    }

    cout << endl;
}

void affiche_exercice_105_b() {
    cout << endl;
    cout << "#### EX 105 B ####";
    cout << endl;

    //Add les coordonnées de pA et pB
    p3 = pA + pB;
    cout << "p3 = pA + pB" << endl;
    p3.affiche();

    //Add les coordonnées de pA et p
    p3 = pA + p;
    cout << "p3 = pA + p" << endl;
    p3.affiche();

    //Add les coordonnées de p et pA
    p3 = p + pA;
    cout << "p3 = p + pA" << endl;
    p3.affiche();

    //Add 5 au x de pA
    p3 = pA + 5;
    cout << "p3 = pA + 5" << endl;
    p3.affiche();

    //Add 5 au x de pA
    p3 = 5 + pA; //marche car fonction amie
    cout << "p3 = 5 + pA" << endl;
    p3.affiche();

    cout << endl;
}

void affiche_exercice_107() {
    cout << endl;
    cout << "#### EX 107 ####";
    cout << endl;

    tabi2d(2, 2) = 15;
    cout << tabi2d(2, 2) << endl;
}

void affiche_exercice_108() {
    cout << endl;
    cout << "#### EX 108 ####";
    cout << endl;

    vectok vectok1(5);

    cout << "Vectok1 : " << endl;
    for (int i = 0; i < vectok1.getTaille(); i++) {
        vectok1[i] = i + 10;
        cout << vectok1[i] << endl;
    }

    cout << "Vectok2  : " << endl;
    vectok vectok2(vectok1);
    for (int j = 0; j < vectok2.getTaille(); j++) {
        cout << vectok2[j] << endl;
    }
}