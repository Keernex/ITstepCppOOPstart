#include "Fraction.h"


Fraction::Fraction()
{
	numerator = 0;
	denominator = 0;
}

Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

int Fraction::get_numerator()
{
	return numerator;
}

int Fraction::get_denominator()
{
	return denominator;
}

void Fraction::set_numerator(int numerator)
{
	this->numerator = numerator;
}

void Fraction::set_denominator(int denominator)
{
	this->denominator = denominator;
}

void Fraction::fraction_addition(int n1, int d1, int n2, int d2)
{
	int common_denominator = d1 * d2;
	int numerator_sum = (n1 * d2) + (n2 * d1);
	int gcd = find_gcd(numerator_sum, common_denominator);
	numerator_sum /= gcd;
	common_denominator /= gcd;
	cout << "Sum: " << numerator_sum << "/" << common_denominator << endl;
}

void Fraction::fraction_subtraction(int n1, int d1, int n2, int d2)
{
	int common_denominator = d1 * d2;
	int numerator_diff = (n1 * d2) - (n2 * d1);
	int gcd = find_gcd(numerator_diff, common_denominator);
	numerator_diff /= gcd;
	common_denominator /= gcd;
	cout << "Difference: " << numerator_diff << "/" << common_denominator << endl;
}

void Fraction::fraction_multiplication(int n1, int d1, int n2, int d2)
{
	int numerator_prod = n1 * n2;
	int denominator_prod = d1 * d2;
	int gcd = find_gcd(numerator_prod, denominator_prod);
	numerator_prod /= gcd;
	denominator_prod /= gcd;
	cout << "Product: " << numerator_prod << "/" << denominator_prod << endl;
}

void Fraction::fraction_division(int n1, int d1, int n2, int d2)
{
	int numerator_div = n1 * d2;
	int denominator_div = d1 * n2;
	int gcd = find_gcd(numerator_div, denominator_div);
	numerator_div /= gcd;
	denominator_div /= gcd;
	cout << "Quotient: " << numerator_div << "/" << denominator_div << endl;
}

int Fraction::find_gcd(int a, int b)
{
	if (b == 0) {
		return a;
	}
	return find_gcd(b, a % b);
}










