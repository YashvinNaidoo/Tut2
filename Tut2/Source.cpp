#include <iostream>
#include <string>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction object;
	int numer1;
	int numer2;
	int denomi1;
	int denomi2;
	cout << "Enter fractions in the form a/b\n";
	cout << "Enter numerator of fraction 1 ";
	cin >> numer1;
	cout << "Enter denominator of fraction 1";
	cin >> denomi1;
	cout << "Enter numerator of fraction 2";
	cin >> numer2;
	cout << "Enter denominator of fraction 2";
	cin >> denomi2;
	double result1 = object.addFract();
	double result2 = object.subtractFrac();
	double result3 = object.multiplyFrac();
	double result4 = object.devideFrac();
	cout << "The sum of the two fractions =" << result1 << "\n";
	cout << "The difference of the two fractions =" << result2 << "\n";
	cout << "The product of the two fractions =" << result3 << "\n";
	cout << "The devision of the two fractions =" << result4 << "\n";
	syestem("pause");
	return 0;
};
