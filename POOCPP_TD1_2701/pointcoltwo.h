#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class pointcoltwo
{
private:
    point pt;
    int col;
public:
    pointcoltwo(float x, float y, int col);
    void affiche() const;

    void setX(float x);
    void setY(float y);
    float getX() const;
    float getY() const;

    void deplace(float dx, float dy);

    void setColor(int col);
    int getColor();

    friend ostream& operator<<(ostream& os, const pointcoltwo& pc);
};

