#include "CPointcol.h"


CPointcol::CPointcol(short n_col)
{
    this->n_color = n_col;
}

CPointcol::CPointcol(float n_x, float n_y, short n_col) : CPoint(n_x,  n_y)
{
    this->setColor(n_col);
}

CPointcol::CPointcol(float n_x, float n_y, short n_col, string m_strType) : CPoint(n_x, n_y, m_strType)
{
    this->setColor(n_col);
}

void CPointcol::setColor(short n_cl)
{
    this->n_color = n_cl;
}


int CPointcol::getColor() const
{
    return this->n_color;
}

void CPointcol::affichePointColor() const
{
    cout << "color : " << n_color << endl;
}
