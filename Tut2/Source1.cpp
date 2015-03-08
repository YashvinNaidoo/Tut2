#include <iostream>
#include <string>
#include "Fraction.h"
using namespace std;

double num1;
double num2;
double denom1;
double denom2;
double result = 0;
Fraction::Fraction(){
	num1 = 0;
	num2 = 0;
	denom1 = 1;
	denom2 = 2;

}

Fraction::Fraction(double n1, double n2, double d1, double d2){
	num1 = n1;
	num2 = n2;
	denom1 = d1;
	denom2 = d2;
}
Fraction::~Fraction(){

}
double Fraction::getNumerator1(){
	return num1;
}
double Fraction::getNumerator2(){
	return num2;
}
double Fraction::getDenominator1(){
	return denom1;
}
double Fraction::getDenominator2(){
	return denom2;
}
void Fraction::setNumerator1(int n1)
{
	num1 = n1;
}
void Fraction::setNumerator2(int n2)
{
	num2 = n2;
}
void Fraction::setDenominator1(int d1)
{
	denom2 = d1;
}
void Fraction::setDenominator2(int d2)
{
	denom2 = d2;
}
double Fraction::addFract()
{
	result = (num1 / denom1) + (num2 / denom2);
	return result;
}
double Fraction::subtractFrac()
{
	result = (num1 / denom1) - (num2 / denom2);
	return result;
}
double Fraction::multiplyFrac()
{
	result = (num1 / denom1) * (num2 / denom2);
	return result;
}
double Fraction::devideFrac()
{
	result = (num1 / denom1) / (num2 / denom2);
	return result;
}
