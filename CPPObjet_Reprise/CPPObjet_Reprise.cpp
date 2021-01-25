// CPPObjet_Reprise.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Cadre.h"

using namespace std;

int main()
{
    cout << "Hello World!\n";

    /*
static_cast :
    il permet de :
        - explicite les conversions implicite supprimant du même fait tout avertissement que donnerait le compilateur si la conversion peut entraîner un risque
        Exemple:
            Un double vers un int

        - convertit vers et depuis n'importe quel type pointé à partir d'un void *
        Exemple:
            Un void * vers un char *
        - convertit au travers d'une hiérarchie de classe (commun avec la notion de l'héritage) sans effectuer de vérification du lien explicite entre les classes
            Exemple : une classe de base vers une classe dérivée
        - Si on ajoute l'attribut const au type converti : il devient constant

dynamic_cast:
    son rôle :
        - tester a l'execution si un pointeur d'un type de base est un pointeur vers un type dérivé
const_cast :
    il permet de :
        - supprimer l'attribut constant ou volatile d'une référence ou d'un type pointé
            Exemple :
                const d'un char * vers un char *

reinterpret_cast :
    il permet de :
        - convertir n'importe quel type pointé en un autre même lorsque ceci n'ont aucun rapport
        - ou convertir un type pointé en sa représentation intégrale (vis versa)
            Exemple :
                int * vers int ou int vers int *

    */

    Cadre c(1.49f, 7.7f, 7, 42, '#');
    c.toString();
    cout << "Is a square : " << c.isCarre() << endl;
    cout << "Perimeter : " << c.computePerimeter() << endl;
    cout << "Surface : " << c.computeSurface() << endl;
}