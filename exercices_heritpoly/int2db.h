#pragma once
#include "int2d.h"

class int2db : public int2d
{
protected:
	int coldeb, colfin;
	int ligdeb, ligfin;
public:
	int2db(int, int, int, int);
	int& operator()(int, int);
};

