#include <iostream>
using namespace std;

#include "point.h"
#include "pointcol.h"
#include "pointcoltwo.h"

int main()
{
    std::cout << "Hello World!\n";

    point pt1(1.f, 7.5f);
    pointcol ptc1(2.5f, 3.25f, 5); //This instruction won't work : No constructor for class pointcol. We need to add it.  *ADDED*
    pointcol().affiche();
    pointcoltwo ptctwo1(8.9f, 7.1f, 200); //EXERCISE 2

    cout << "######################################################################" << endl;

    pt1.affiche(); //will display x and y
    ptc1.affiche(); //will display x, y and color
    ptctwo1.affiche(); //will display x, y, and color ---- EXERCISE 2

    cout << "######################################################################" << endl;

    cout << pt1;  //overload operator<<
    cout << ptc1; //overload operator<<
    cout << ptctwo1; //overload operator<< ---- EXERCISE 2

    cout << "######################################################################" << endl;

    pt1.deplace(5.3f, 1.5f); // MOVE POINT BY 5.3fX 1.5fY
    ptc1.deplace(3.f, 7.4f); // MOVE POINT BY 3X 7.4fY
    ptctwo1.deplace(7.f, 9.f); // MOVE POINT BY 7X 9Y ---- EXERCISE 2
    cout << pt1; //overload operator<<
    cout << ptc1; //overload operator<<
    cout << ptctwo1; //overload operator<< ---- EXERCISE 2

    cout << "######################################################################" << endl;
}

