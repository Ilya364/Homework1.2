#include "Complex.h"
#include <iostream>
#include <fstream>

int main()
{
	std::ifstream f;
	f.open("C:\homework\complex.txt");

	int n;
	f >> n;

	Complex* arr = new Complex[n];
	double max = 0;

	for (int i = 0; i < n; i++)
	{
		Complex a;
		double real;
		double imag;

		f >> real;
		f >> imag;
		a.SetReal(real);
		a.SetImag(imag);

		arr[i] = a;
		if (arr[i].GetAbs() > max) 
			max = arr[i].GetAbs();
	}
}

