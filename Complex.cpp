#include "Complex.h"

bool Complex::operator < (Complex& c1)
{
	return this->GetAbs()<c1.GetAbs();
}

bool Complex::operator>(Complex& c1)
{
	return this->GetAbs() < c1.GetAbs();
}

bool Complex::operator<=(Complex& c1)
{
	return this->GetAbs() <= c1.GetAbs();
}

bool Complex::operator>=(Complex& c1)
{
	return this->GetAbs() >= c1.GetAbs();
}

bool Complex::operator==(Complex& c1)
{
	return this->real == c1.real && this->imag == c1.imag;
}

bool Complex::operator!=(Complex& c1)
{
	return this->real!=c1.real && this->imag !=c1.imag;
}

Complex Complex::operator+(const Complex& c1)
{
	return Complex(this->real + c1.real, this->imag + c1.imag);
}

Complex Complex::operator-(const Complex& c1)
{
	return Complex(this->real - c1.real, this->imag + c1.imag);
}

Complex Complex::operator*(const Complex& c1)
{
	return Complex(this->real * c1.real - this->imag * c1.imag, this->real * c1.imag + this->imag * c1.real);
}

Complex Complex::operator/(const Complex& c1)
{
	double z = (c1.real * c1.real + c1.imag * c1.imag);
	double real = (this->real * c1.real + this->imag * c1.imag);
	double imag = (c1.real * this->imag - this->real * c1.imag);

	Complex result(real, imag);
	return result;
}

void Complex::Print()
{
	if (this->imag>0)
	{
		cout << this->real << "+" << this->imag << "i" << "   ";
	}
	else
	{
		if (this->imag==0)
		{
			cout << this->real << "   ";
		}
		else
		{
			cout << this->real << this->imag << "i" << "   ";
		}
	}
}

