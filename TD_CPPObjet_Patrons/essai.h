#pragma once
template<class T, int n> class essai {
	T tab[n];
public:
	essai(T tab); //constructor
};

template<class T, int n>
inline essai<T, n>::essai(T value)
{
	for (int i = 0; i < n; i++) {
		tab[i] = value;
	}
}