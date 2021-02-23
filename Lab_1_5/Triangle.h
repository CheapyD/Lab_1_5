#pragma once
#include "Triad.h"

class Triangle
{
private:
	Triad triad;

public:
	double GetA() const { return triad.GetA(); }
	double GetB() const { return triad.GetB(); }
	double GetC() const { return triad.GetC(); }

	void SetA(double value);
	void SetB(double value);
	void SetC(double value);

	bool Init(double a, double b, double c);
	void Display() const;
	void Read();

	double Square() const;
	void Angle(double& A, double& B, double& C) const;
};
