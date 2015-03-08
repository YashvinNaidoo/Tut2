#ifndef FRACTION_H
#define FRACTION_H

class Fraction{

	double numerator1;
	double numerator2;
	double denominator1;
	double denominator2;

public:
	Fraction();
	Fraction(double, double, double, double);
	~Fraction();
	void setNumerator1(double);
	void setNumerator2(double);
	void setDenominator1(double);
	void setDenominator2(double);
	double getNumerator1();
	double getNumerator2();
	double getDenominator1();
	double getDenominator2();
	double addFract();
	double subtractFrac();
	double multiplyFrac();
	double devideFrac();

};
#endif
