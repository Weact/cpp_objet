#pragma once
#include <iostream>
using namespace std;

template <class T> class vect3
{
protected:
	T m_fX, m_fY, m_fZ;
public:
	vect3(T x = 0, T y = 0, T z = 0);
	vect3(const vect3<T>& vcopy);

	void setX(T x);
	void setY(T y);
	void setZ(T z);

	T getX() const;
	T getY() const;
	T getZ() const;

	void affiche() const;

	template <class T>
	friend bool coincide(const vect3<T> v1, const vect3<T> v2);

	template <class T>
	friend bool operator==(const vect3<T> v1, const vect3<T> v2); //COINCIDE

	vect3<T> operator=(vect3<T> v); //ASSIGNATION
	vect3 operator+(const vect3<T>& v1); //ADDITION VECTORIELLE
	vect3 operator-(const vect3<T>& v1) { //SOUSTRACTION VECTORIELLE
		vect3<T> vectResult(0.f, 0.f, 0.f);
		vectResult.setX(this->getX() - v1.getX());
		vectResult.setY(this->getY() - v1.getY());
		vectResult.setZ(this->getZ() - v1.getZ());

		return vectResult;
	}
	vect3 operator*(T coeff) { //multiplication d'un vecteur par un scalaire
		vect3 vectResult(0.f, 0.f, 0.f);
		vectResult.m_fX = this->m_fX * coeff;
		vectResult.m_fY = this->m_fY * coeff;
		vectResult.m_fZ = this->m_fZ * coeff;
		return vectResult;
	}
	vect3 operator*(const vect3& v) { //PRODUIT VECTORIEL
		vect3 vectResult(0.f, 0.f, 0.f);
		vectResult.m_fX = this->m_fY * v.m_fZ - this->m_fZ * v.m_fY;
		vectResult.m_fY = this->m_fZ * v.m_fX - this->m_fX * v.m_fZ;
		vectResult.m_fZ = this->m_fX * v.m_fY - this->m_fY * v.m_fX;
		return vectResult;
	}
	friend ostream& operator<<(ostream& os, const vect3<T> v){
		os << "VECTOR 3D DIMENSIONS : " << v.getX() << ", " << v.getY() << ", " << v.getZ() << endl;
		return os;
	}
};

//CONSTRUCTOR
template<class T>
inline vect3<T>::vect3(T x, T y, T z) {
	this->m_fX = x;
	this->m_fY = y;
	this->m_fZ = z;
}

template<class T>
inline vect3<T>::vect3(const vect3<T>& vcopy)
{
	this->m_fX = vcopy.m_fX;
	this->m_fY = vcopy.m_fY;
	this->m_fZ = vcopy.m_fZ;
}

//SETTERS
template<class T>
inline void vect3<T>::setX(T x) {
	this->m_fX = x;
}
template<class T>
inline void vect3<T>::setY(T y) {
	this->m_fY = y;
}
template<class T>
inline void vect3<T>::setZ(T z) {
	this->m_fZ = z;
}
//GETTERS
template<class T>
inline T vect3<T>::getX() const {
	return this->m_fX;
}
template<class T>
inline T vect3<T>::getY() const {
	return this->m_fY;
}
template<class T>
inline T vect3<T>::getZ() const{
	return this->m_fZ;
}

//OPERATORS
template<class T>
vect3<T> vect3<T>::operator=(vect3<T> v) { //ASSIGNATION
	this->setX(v.getX());
	this->setY(v.getY());
	this->setZ(v.getZ());
	return *this;
}
template<class T>
vect3<T> vect3<T>::operator+(const vect3<T>& v1) { //ADDITION VECTORIELLE
	vect3<T> vectResult(0.f, 0.f, 0.f);
	vectResult.setX(this->getX() + v1.getX());
	vectResult.setY(this->getY() + v1.getY());
	vectResult.setZ(this->getZ() + v1.getZ());

	return vectResult;
}

//METHODS

template<class T>
inline void vect3<T>::affiche() const {
	cout << *this;
}

template<class T>
inline bool coincide(vect3<T> v1, vect3<T> v2)
{
	return v1 == v2;
}

template<class T>
inline bool operator==(const vect3<T> v1, const vect3<T> v2)
{
	return (v1.m_fX == v2.m_fX && v1.m_fY == v2.m_fY && v1.m_fZ == v2.m_fZ);
}

template<class T>
inline T scalarproduct(vect3<T> v1, vect3<T> v2) { //PRODUIT SCALAIRE DE DEUX VECTEURS
	return (v1.getX() * v2.getX() + v1.getY() * v2.getY() + v1.getZ() * v2.getZ());
}

template<class T>
inline T mixproduct(vect3<T> v1, vect3<T> v2, vect3<T> v3){
	vect3<T> vresult = v1;
	vresult = vresult * v2;
	return fabs(scalarproduct(vresult, v3));
}