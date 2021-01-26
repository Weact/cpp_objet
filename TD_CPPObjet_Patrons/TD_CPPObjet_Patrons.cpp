// TD_CPPObjet_Patrons.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "CPoint.h"
#include "TCPoint.h"
#include "CPointcol.h"
#include "essai.h"
#include "pointcol.h"
#include "TPoint.h"
#include "dynvec.h"
#include "vect.h"

template <class T> T minimum(T a, T b);
template <class T> T maximum(T a, T b);
template <class T> T sqrt(T a);
template <class T> T sumavg(T array[], int size);

int main()
{
    std::cout << "Hello World!\n";

    CPoint cp1(7.0f, 5.0f);
    CPoint cp2(8.0f, 9.5f);
    TCPoint<float> tc1(17.f, 1.4f);
    TCPoint<float> tc2(1.1f, 31.3f);

    float arr[] = { 1.2f, 6.1f, 4.2f, 3.1f, 7.2f };

    CPoint cR;

    cR = minimum(cp1, cp2);
    cout << "Minimum Point Coordinates : X/Y -> [" << cR.getX() << "/" << cR.getY() << "]" << endl;

    cR = maximum(cp1, cp2);
    cout << "Maximum Point Coordinates : X/Y -> [" << cR.getX() << "/" << cR.getY() << "]" << endl;

    cR = sqrt(cp1);
    cout << "Coordinates of Point 1 After Square : X/Y -> [" << cR.getX() << "/" << cR.getY() << "]" << endl;

    cR = sqrt(cp2);
    cout << "Coordinates of Point 2 After Square : X/Y -> [" << cR.getX() << "/" << cR.getY() << "]" << endl;

    tc1.affiche();
    tc2.affiche();

    float avgarray = sumavg(arr, 5);
    cout << "AVG of arr[] : " << avgarray << endl;

    cout << endl;
    // ############################################################################################################
    cout << endl;

    CPoint cp3;
    CPointcol cpColor;
    CPointcol cpColor2(190);
    CPointcol cpColor3(5, 3, 230);

    cpColor.setColor(255);

    cout << "color : " << cpColor.getColor() << endl;
    cpColor.toString();

    cpColor.affiche();
    cpColor.affichePointColor();

    cpColor2.toString();
    cpColor2.affiche();
    cpColor2.affichePointColor();

    cpColor3.toString();
    cpColor3.affiche();
    cpColor3.affichePointColor();

    CPoint cp4(7.f, 4.f, "HELLO WORLD");
    CPointcol cpColor4(3.f, 9.f, 255, "WELCOME WORLD");
    cp4.affiche();
    cpColor4.affiche();
    cpColor4.affichePointColor();


    cout << endl;
    // ############################################################################################################
    cout << endl;

    const int n = 3;
    int p = 5;

    essai<int, 10> ei(3);
    essai<float, n> ef(0.0);
    //essai<double, p> ed(2.5); ERROR, can't use variable p as argument because it has to be declared as a const variable.

    // ############################################################################################################

    pointcol<float, short> pointc1(5.f, 10.5f, 255);
    pointc1.affiche();
    cout << pointc1;

    cout << endl;
    // ############################################################################################################
    cout << endl;

    TPoint<char> pchar(60, 65);
    pchar.affiche(); //Display < and B because 60 and 65 are their ASCII CODE.
    // TEMPLATE DEFINITION NEED TO BE MODIFIED TO [ static_cast<int>(x) ](int)x and [ static_cast<int>(y) ](int)y inside affiche() method

 

    vect<int> vect1(5);
    cout << vect1;


    dynvec<int, 2> vec(10, 15);
    cout << vec; // ADDING OPERATOR<< OVERLOAD SO THAT WE CAN DISPLAY VECTOR INFORMATION DIRECTLY WITH COUT
    //cout << vec[1] << endl;
    vec[1] = 9; //OK !
    cout << vec; // ADDING OPERATOR<< OVERLOAD SO THAT WE CAN DISPLAY VECTOR INFORMATION DIRECTLY WITH COUT
    //cout << vec[1] << endl;
    vec[2] = 10;

    const dynvec<int, 2> vec2(30, 35);
    cout << vec2; // ADDING OPERATOR<< OVERLOAD SO THAT WE CAN DISPLAY VECTOR INFORMATION DIRECTLY WITH COUT
    //cout << vec2[1] << endl;
    //vec2[1] = 25; //ERROR, Array vec2 is defined as const, values can't be changed.
    //cout << vec2[1] << endl;
}

template <class T> T minimum(T a, T b) {
    if (a < b)
        return a;
    else
        return b;
}

template <class T> T maximum(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

template <class T> T sqrt(T a) {
    return a * a;
}

template <class T> T sumavg(T array[], int size) {
    T total = T();
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total;
}