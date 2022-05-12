#pragma once
#include <iostream>
using namespace std;

class Complex
{
	double real;
	double imag;

public:
	
	Complex() :real(0), imag(0) {};

	Complex(double real, double imag) : real(real), imag(imag) {};

	void SetReal(double real)
	{
		this->real = real;
	}

	void SetImag(double imag)
	{
		this->imag = imag;
	}

	double GetReal()
	{
		return this->real;
	}
	
	double GetImag()
	{
		return this->imag;
	}

	double GetAbs()
	{
		return (this->real * this->real + this->imag * this->imag);
	}

	Complex GetConjug()
	{
		return Complex(this->real, this->imag * (-1));
	}

	void Print();

	bool operator < (Complex&); 
	bool operator > (Complex&);
	bool operator <=(Complex&);
	bool operator >=(Complex&);
	bool operator ==(Complex&);
	bool operator !=(Complex&);

	 Complex operator+ ( const Complex&);
	 Complex operator- ( const Complex&);
	 Complex operator* ( const Complex&);
	 Complex operator/ (const Complex&);

};



