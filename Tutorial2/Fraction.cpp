#include "Fraction.h"
#include <iostream>
#include <stdio.h>

Fraction::Fraction(){}
Fraction::~Fraction(){}

void Fraction::Add(Fraction fraction)
{
	value += fraction.GetValue();
}

void Fraction::Subtract(Fraction fraction)
{
	value -= fraction.GetValue();
}

void Fraction::Multiply(Fraction fraction)
{
	value *= fraction.GetValue();
}

void Fraction::Divide(Fraction fraction)
{
	value /= fraction.GetValue();
}

void Fraction::Print()
{
	std::cout << value;
}

void Fraction :: operator+=(const Fraction & anotherFraction)
{
	Add(anotherFraction);
}

void Fraction :: operator-=(const Fraction & anotherFraction)
{
	Subtract(anotherFraction);
}

void Fraction :: operator*=(const Fraction & anotherFraction)
{
	Multiply(anotherFraction);
}

void Fraction :: operator/=(const Fraction & anotherFraction)
{
	Divide(anotherFraction);
}