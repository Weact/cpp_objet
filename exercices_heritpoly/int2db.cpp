#include "int2db.h"

int2db::int2db(int ld, int lf, int cd, int cf): int2d(lf - ld + 1, cf - cd + 1)
{
	this->coldeb = cd;
	this->colfin = cf;
	this->ligdeb = ld;
	this->ligfin = lf;
}

int& int2db::operator()(int l, int c) { return int2d::operator()(l - ligdeb, c - coldeb); }
