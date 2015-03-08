
class Fraction
{
public:

	//constructor and destructor
	Fraction();
	~Fraction();

	//Methods
	void Add(Fraction fraction);
	void Subtract(Fraction fraction);
	void Multiply(Fraction fraction);
	void Divide(Fraction fraction);
	void Print();

	//Overloads
	void operator +=(const Fraction & anotherFraction);
	void operator -=(const Fraction & anotherFraction);
	void operator *=(const Fraction & anotherFraction);
	void operator /=(const Fraction & anotherFraction);

	//Getters
	double GetValue()
	{
		return value;
	}

	//Setters
	void SetValue(double newValue)
	{
		value = newValue;
	}

private:

	//current class fraction value
	double value;
};