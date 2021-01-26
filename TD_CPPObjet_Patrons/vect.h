#pragma once

template <class T> class vect {
	T* vectdim; //coordonnees
	int m_taille;
public:
	vect(int n);
	
	T operator[](int i) const {
		if (i >= 0 && i < m_taille) {
			return vectdim[i];
		}
		else {
			cout << "Index error [dynvec.h]" << endl;
			exit(1);
		}
	}

	T& operator[](int i) {
		if (i >= 0 && i < m_taille) {
			return vectdim[i];
		}
		else {
			cout << "Index Error [dynvec.h]" << endl;
			exit(1);
		}
	}

	friend ostream& operator<<(ostream& os, const vect<T>& v) {
		os << "VECTOR SIZE : [" << v.m_taille << "]" << endl;
		return os;
	}
};

template<class T>
inline vect<T>::vect(int n)
{
	m_taille = n;
	vectdim = new T[m_taille];
}
