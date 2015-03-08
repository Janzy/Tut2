#include <iostream>
using namespace std;
#include "Fraction.h"

int main()
{
	Fraction f1 = Fraction();
	f1.SetValue(1 / 4);

	Fraction f2 = Fraction();
	f2.SetValue(1 / 2);

	f1.Add(f2);
	f1.Print();

};