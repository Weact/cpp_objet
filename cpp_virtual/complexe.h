#pragma once
#include "base.h"
class complexe :
    public base
{
protected:
    float r, i;
public:
    complexe(float reel = 1.f, float imaginaire = 3.f);

    void affiche() const {
        cout << "Je suis un complexe" << endl;
        cout << "Mon reel : " << r << endl;
        cout << "Mon imaginaire : " << i << endl;
    }
};

