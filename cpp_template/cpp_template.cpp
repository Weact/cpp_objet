// cpp_template.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "CPoint.h"

template <class T> T minimum(T ac, T bc);
template <class T> T maximum(T a, T b);
const char* minimum(const char* adr1, const char* adr2);

using namespace std;

int main()
{
    CPoint c1(9.4f, 7.1f);
    CPoint c2(7.5f, 9.4f);

    const char* ca = "monsieur";
    const char* cb = "bonjour";

    std::cout << "Hello World!\n";
    minimum(ca, cb);
    cout << minimum(2, 5) << endl;
    cout << minimum("bonjour", "monsieur") << endl;
    cout << minimum(c1, c2) << endl;
    cout << maximum(c1, c2) << endl;

    return 0;
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

//Specialisation de minimum pour char *
const char* minimum(const char* adr1, const char* adr2) {

    if (strcmp(adr1, adr2) < 0)
        return adr1;
    else
        return adr2;


}