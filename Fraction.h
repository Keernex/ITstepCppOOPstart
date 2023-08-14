#include "lib.h"

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int numerator, int denominator);

	int get_numerator();
	int get_denominator();

	void set_numerator(int numerator);
	void set_denominator(int denominator);

	void fraction_addition(int n1,int d1,int n2,int d2);
	void fraction_subtraction(int n1, int d1, int n2, int d2);
	void fraction_multiplication(int n1, int d1, int n2, int d2);
	void fraction_division(int n1, int d1, int n2, int d2);

	int find_gcd(int a, int b);
};





