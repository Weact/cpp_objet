#pragma once
#include<iostream>
#include "point.h"

using namespace std;

class pointcol : public point
{
private:
    int col;
public:
    pointcol(float x=0.f, float y=0.f, int col=0) : point(x, y) {
        this->col = col;
    }
    void affiche() const;

    void setColor(int col);
    int getColor();

    friend ostream& operator<<(ostream& os, const pointcol& pc);
};

