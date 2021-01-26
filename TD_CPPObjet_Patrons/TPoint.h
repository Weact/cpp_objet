#pragma once

#include <iostream>
using namespace std;

template <class T> class TPoint{
	T x, y;

public:
	TPoint(T abs, T ord) { x = abs, y = ord; }
	void affiche() const;
};

template <class T> void TPoint<T>::affiche() const {
	cout << "Coordinates : " << static_cast<int>(x) << " " << static_cast<int>(y) << endl;
}