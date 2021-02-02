#pragma once
#include "base.h"
class ens_heter :
    public base
{
protected:
    int cursor;
    int celem;
    int nelem;
    base** adr;
public:
    ens_heter(int n = 5);
    ~ens_heter();

    void ajoute(base*);
    bool appartient(base*);
    int cardinal();

    void init();
    base& suivant();
    bool existe();

    void liste();

    virtual void affiche()const {};
};

