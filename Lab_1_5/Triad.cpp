#include "Triad.h"
#include <iostream>

using namespace std;

void Triad::SetA(double value)
{
	a = value;
}

void Triad::SetB(double value)
{
	b = value;
}

void Triad::SetC(double value)
{
	c = value;
}

bool Triad::Init(double a, double b, double c)
{
	SetA(a);
	SetB(b);
	SetC(c);
	return true;
}

void Triad::Read()
{
	double A, B, C;
	do
	{
		cout << "a = "; cin >> A;
		cout << "b = "; cin >> B;
		cout << "c = "; cin >> C;
	} while (!Init(A, B, C));
}

void Triad::Display() const
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

double Triad::Sum()
{
	return a + b + c;;
}
