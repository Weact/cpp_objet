#include <iostream>
#include "base.h"
#include "ens_heter.h"
#include "point.h"
#include "point2.h"
#include "pointcol.h"
#include "complexe.h"

using namespace std;

void affiche_ex_115();
void affiche_ex_116();
void affiche_ex_117();

int main()
{
    affiche_ex_115();
    affiche_ex_116();
    affiche_ex_117();
}

void affiche_ex_115() {
    cout << endl;
    cout << "##### EX 115 #####" << endl;
    cout << endl;

    point p(3, 5);
    point* adp = &p;
    pointcol pc(8, 6, 2);
    pointcol* adpc = &pc;

    adp->affiche();
    adpc->affiche();
    cout << " ------------------------" << endl;

    adp = adpc;
    adp->affiche();
    adpc->affiche();

    /*
    * Résultats:
    * adp utilise la méthode affiche de point 3,5
    * adpc utilise la méthode affiche de pointcol 8,6,2
    * adpc est assigné a adp 8,6,2
    * adp et adpc utilisent la méthode affiche de pointcol 8,6,2 . 8,6,2
    */
}

void affiche_ex_116() {
    cout << endl;
    cout << "##### EX 116 #####" << endl;
    cout << endl;

    point p(3, 4);
    pointcol pc(5, 9, 5);
    p.affiche(); //identifie() point et affiche() point
    pc.affiche(); //identifie() pointcol et affiche() pointcol
    cout << " ------------------------" << endl;
    point* adp = &p;
    pointcol* adpc = &pc;
    adp->affiche(); //identifie() point et affiche() point
    adpc->affiche(); //identifie() pointcol et affiche() pointcol
    cout << " ------------------------" << endl;
    adp = adpc; //assignation de apdc à adp
    adp->affiche(); //identifie() pointcol et affiche() pointcol
    adpc->affiche(); //identifie() pointcol et affiche() pointcol

    /*
    * Résultats:
    * p utilise la méthode identifie et affiche de point
    * pc utilise la méthode affiche de point qui utilise la méthode identifie de pointcol
    * adp utilise la  méthode identifie et affiche de point
    * adpc utilise la  méthode affiche de point qui utilise la méthode identifie de pointcol
    * adpc est assigné a adp
    * adp et adpc utiliseront la méthode affiche de point et appel identifie de pointcol
    */
}

void affiche_ex_117() {
    cout << endl;
    cout << "##### EX 117 #####" << endl;
    cout << endl;

    ens_heter monTab(4);

    point2 p(6, 4);
    point2 p2(7, 3);
    complexe cmplx(7.f, 13.4943f);
    complexe cmplx2(9.f, 21.1987f);

    monTab.ajoute(&p);
    monTab.ajoute(&p2);
    monTab.ajoute(&cmplx);
    monTab.ajoute(&cmplx2);

    monTab.liste();


}