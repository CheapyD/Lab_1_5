#pragma once

class Triad
{
private:
	double a;
	double b;
	double c;

public:
	double GetA() const { return a; }
	double GetB() const { return b; }
	double GetC() const { return c; }

	void SetA(double value);
	void SetB(double value);
	void SetC(double value);

	bool Init(double a, double b, double c);
	void Display() const;
	void Read();

	double Sum();
};


