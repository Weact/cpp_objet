#pragma once
#include "vect3.h"
template <class T> class vect2 : public vect3<T>
{
public:
	vect2(T x, T y);
	vect2(const vect2<T>& vcopy);

	void affiche() const;

	friend ostream& operator<<(ostream& os, const vect2<T> v) {
		os << "VECTOR 2D DIMENSIONS : " << v.getX() << ", " << v.getY() << endl;
		return os;
	}

	vect2<T> operator=(vect2<T> v);//ASSIGNATION
	vect2<T> operator+(const vect2<T>& v);//ADDITION VECTORIELLE
	vect2<T> operator-(const vect2<T>& v);//SOUSTRACTION VECTORIELLE
	vect2<T> operator*(T coeff);//MULTIPLICATION PAR COEFFICIENT
	vect2<T> operator*(const vect2<T>& v);//PRODUIT SCALAIRE
};

template<class T>
inline vect2<T>::vect2(T x, T y)
{
	this->m_fX = x;
	this->m_fY = y;
	this->m_fZ = 1;
};

template<class T>
inline vect2<T>::vect2(const vect2<T>& vcopy)
{
	this->m_fX = vcopy.m_fX;
	this->m_fY = vcopy.m_fY;
	this->m_fZ = 1;
}


//OPERATORS

template<class T>
vect2<T> vect2<T>::operator=(vect2<T> v) { //ASSIGNATION
	this->m_fX = v.m_fX;
	this->m_fY = v.m_fY;
	return *this;
}

template<class T>
vect2<T> vect2<T>::operator+(const vect2<T>& v){
	vect2<T> vectResult(0.f, 0.f);
	vectResult.setX(this->getX() + v.getX());
	vectResult.setY(this->getY() + v.getY());

	return vectResult;
}
template<class T>
vect2<T> vect2<T>::operator-(const vect2<T>& v) {
	vect2<T> vectResult(0.f, 0.f);
	vectResult.setX(this->getX() - v.getX());
	vectResult.setY(this->getY() - v.getY());
	return vectResult;
}
template<class T>
vect2<T> vect2<T>::operator*(T coeff) { //multiplication d'un vecteur par un scalaire
	vect2<T> vectResult(0.f, 0.f);
	vectResult.m_fX = this->m_fX * coeff;
	vectResult.m_fY = this->m_fY * coeff;
	return vectResult;
}
template<class T>
vect2<T> vect2<T>::operator*(const vect2<T>& v) { //PRODUIT VECTORIEL
	vect2<T> vectResult(0.f, 0.f);
	vectResult.m_fX = this->m_fY * v.m_fZ - this->m_fZ * v.m_fY;
	vectResult.m_fY = this->m_fZ * v.m_fX - this->m_fX * v.m_fZ;
	return vectResult;
}

template<class T>
inline void vect2<T>::affiche() const {
	cout << *this;
}