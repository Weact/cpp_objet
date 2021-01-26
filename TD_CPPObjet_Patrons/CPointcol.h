#pragma once
#include "CPoint.h"
class CPointcol :
    public CPoint
{
    short n_color;
public:
    CPointcol(short n_col = 0);
    CPointcol(float n_x, float n_y, short n_col);
    CPointcol(float n_x, float n_y, short n_col, string m_strType);
    void setColor(short n_cl);
    int getColor() const;
    void affichePointColor() const;
};

