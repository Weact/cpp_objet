#pragma once

template <class T, int n> class dynvec {
	T dim[n];
	T ptA, ptB;
public:
	dynvec(T ptA, T ptB);

	T operator[](int i) const {
		if (i >= 0 && i < n) {
			return dim[i];
		}
		else {
			cout << "Index error [dynvec.h]" << endl;
			exit(1);
		}
	}

	T& operator[](int i) {
		if (i >= 0 && i < n) {
			return dim[i];
		}
		else {
			cout << "Index Error [dynvec.h]" << endl;
			exit(1);
		}
	}

	friend ostream& operator<<(ostream& os, const dynvec<T, n>& vec) {
		os << "VECTOR DIMENSIONS : [" << vec.operator[](0) << " ; " << vec.operator[](1) << "]" << endl;
		return os;
	}

};

template<class T, int n>
inline dynvec<T, n>::dynvec(T ptA, T ptB)
{
	this->ptA = ptA;
	this->ptB = ptB;
	this->operator[](0) = this->ptA;
	this->operator[](1) = this->ptB;
}
