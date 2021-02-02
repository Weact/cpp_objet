#include <iostream>
#include  "A.h"
#include  "B.h"
#include  "C.h"
#include "D.h"
#include "liste.h"
#include "point.h"
#include "liste_point.h"
using namespace std;
int main()
{
    //C c1;
    //C c2(10, 11, 12, 5.0);
    //D d(10, 20, 5.0f);

    liste ml;
    int a = 5;
    int b = 6;
    int c = 7;
    float d = 8.1f;
    float e = 9.2f;
    float f = 10.3;
    ml.ajoute(&a);
    ml.ajoute(&b);
    ml.ajoute(&c);
    ml.ajoute(&d);
    ml.ajoute(&e);
    ml.ajoute(&f);

    //Mettre en pas à pas, break point ligne 36

    cout << ml.premier() << endl;
    while (!ml.fini()) {
        void* v;
        v = ml.prochain();
        cout << v << endl;
    }

    liste_point mlp;
    point p1(7, 7);
    point p2(3, 3);
    point p3(5, 5);
    point p4(10, 10);
    point p5(20, 20);
    point p6(17, 17);

    mlp.ajoute(&p1);
    mlp.ajoute(&p2);
    mlp.ajoute(&p3);
    mlp.ajoute(&p4);
    mlp.ajoute(&p5);
    mlp.ajoute(&p6);

    mlp.affiche();


}


/* ***1***
* B 1 0
* A 1 1
* C 3 3
* B 1 5
* A 10 1
* C 12 21
*/

/* ***2***
* B 1 0 //idem 1
* A 2 1 //Change, pas de A dans C donc on prend les valeurs par défaut
* C 3 3 //idem 1
* B 1 5 //idem 1
* A 2 1 //Pareil, 2 étant la valeur par défaut et n'ayant pas renseigné de valeur pour le constructeur de A dans C
* C 12 21 //idem 1
*/

/* ***3***
* A 1
* B 5
* A 21
* C 10
* D 20
*/