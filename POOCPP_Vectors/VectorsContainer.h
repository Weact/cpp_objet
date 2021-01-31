#pragma once

//#include "vect3.h"
#include "vect2.h"

template <class T, int n> class VectorsContainer {
private:
    vect3<T> values[n];

public:
    VectorsContainer();
    VectorsContainer(vect3<T> value);
    vect3<T>& operator[](int);
    void affiche();
};

template<class T, int n>
inline VectorsContainer<T, n>::VectorsContainer()
{
    for (int i = 0; i < n; i++)
    {
        this->values[i] = vect3<T>();
    }
}

template<class T, int n>
inline VectorsContainer<T, n>::VectorsContainer(vect3<T> value)
{
    for (int i = 0; i < n; i++)
    {
        this->values[i] = value;
    }
}

template<class T, int n>
inline vect3<T>& VectorsContainer<T, n>::operator[](int index)
{
    if (index >= n)
    {
        cout << "Array index out of bound, exiting";
        exit(0);
        return this->values[0];
    }

    return this->values[index];
}

template<class T, int n>
inline void VectorsContainer<T, n>::affiche()
{
    cout << "Array of vect : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "vect " << i << " :";
        this->values[i].affiche();
    }
}