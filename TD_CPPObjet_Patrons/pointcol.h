#pragma once

#include <iostream>
using namespace std;

template <class T, class TC> class pointcol {
	T m_tX, m_tY;
	TC m_tCol;
public:
	pointcol(T x, T y, TC color);
	void affiche() const;

	friend ostream& operator<<(ostream& flux, const pointcol<T, TC>& ptcol) {
		flux << "POINTCOL INFO : -x- " << ptcol.m_tX << " -y- " << ptcol.m_tY << " -col- " << ptcol.m_tCol << endl;
		return flux;
	}
};

template<class T, class TC>
inline pointcol<T, TC>::pointcol(T x, T y, TC color)
{
	this->m_tX = x;
	this->m_tY = y;
	this->m_tCol = color;
}

template<class T, class TC>
void inline pointcol<T, TC>::affiche() const
{
	cout << "x : " << m_tX << endl;
	cout << "y : " << m_tY << endl;
	cout << "color : " << m_tCol << endl;
}