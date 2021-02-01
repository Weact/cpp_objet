#include "CPointcol.h"

CPointcol::CPointcol(int x, int y, int col): CPoint(x, y)
{
	this->x = x;
	this->y = y;
	this->cl = col;
}
