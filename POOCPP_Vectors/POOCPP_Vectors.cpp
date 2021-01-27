#include <iostream>
#include "vect3.h";
using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    float scalaire = 0.f;
    float produitmixte = 0.f;

    vect3<float> vec1(1.f, 9.f, 3.f);
    vect3<float> vec2(4.f, 5.f, 8.f);
    vect3<float> vec3(4.f, 6.f, 2.f);
    vect3<float> vec4(2.f, 12.f, 4.1f);
    vect3<float> vec5(6.f, 7.f, 5.4f);

    vect3<float> vecResult(0.f, 0.f, 0.f);

    cout << "vec1 and vec2 coincide ? : " << coincide(vec1, vec2) << endl;

    cout << "###########################" << endl;

    //SAME AS COUT << VEC;
    vec1.affiche();
    vec2.affiche();
    vec3.affiche();
    vec4.affiche();
    vec5.affiche();
    vecResult.affiche();

    cout << "###########################" << endl;

    vecResult = vec1 + vec2;
    cout << vecResult;

    vecResult = vec1 - vec2;
    cout << vecResult;

    vecResult = vec1 * 5;
    cout << vecResult;

    scalaire = scalarproduct(vec1, vec2);
    cout << "SCALAR PRODUCT VEC1, VEC2 : " << scalaire << endl;

    produitmixte = mixproduct(vec1, vec2, vec3);
 
    cout << "MIXTE PRODUCT VEC1, VEC2, VEC3 : " << produitmixte << endl;

    cout << "###########################" << endl;

    //SAME AS COUT << VEC;
    vec1.affiche();
    vec2.affiche();
    vec3.affiche();
    vec4.affiche();
    vec5.affiche();
    vecResult.affiche();

    cout << "###########################" << endl;
}