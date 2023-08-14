#include "lib.h"
#include "Fraction.h"


int main()
{
	class Fraction fraction_funk;
	vector<Fraction> fraction;
	int size_fractions = 0;

	do
	{
		system("cls");
		cout << "1 - input fraction" << endl;
		cout << "2 - print fraction" << endl;
		cout << "3 - addition fractions" << endl;
		cout << "4 - subtraction fractions" << endl;
		cout << "5 - multiplication fractions" << endl;
		cout << "6 - division fractions" << endl;
		cout << "7 - end" << endl;

		int select;
		cout << "input number: ";
		while (!(std::cin >> select) || select < 1 || select > 7)
		{
			cout << "input number: ";
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}

		if (select == 1)
		{
			size_fractions++;
			fraction.resize(size_fractions);

			int numerator;
			cout << "input numerator: ";
			while (!(std::cin >> numerator))
			{
				cout << "input numerator: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}

			int denominator;
			cout << "input denominator: ";
			while (!(std::cin >> denominator))
			{
				cout << "input denominator: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}

			fraction[size_fractions-1].set_numerator(numerator);
			fraction[size_fractions-1].set_denominator(denominator);
		}
		if (select == 2)
		{
			for (int i = 0; i < size_fractions; i++)
			{
				cout << "fraction " << i + 1 << endl;
				cout << "numerator: " << fraction[i].get_numerator() << endl;
				cout << "denominator: " << fraction[i].get_denominator() << endl;
				cout << endl;
			}
		}
		if (select == 3)
		{
			if (size_fractions < 2)
			{
				continue;
			}
			int f1;
			cout << "(index)input number first fraction: ";
			while (!(std::cin >> f1))
			{
				cout << "input number first fraction: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}

			int f2;
			cout << "(index)input number second fraction: ";
			while (!(std::cin >> f2))
			{
				cout << "input number second fraction: ";
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
			int n1 = fraction[f1].get_numerator();
			int d1 = fraction[f1].get_denominator();
			int n2 = fraction[f2].get_numerator();
			int d2 = fraction[f2].get_denominator();

			fraction_funk.fraction_addition(n1, d1, n2, d2);
		}
		if (select == 4)
		{

		}
		if (select == 5)
		{

		}
		if (select == 6)
		{

		}
		if (select == 7)
		{
			break;
		}
		getchar();
		_getch();
	} while (true);
	return 0;
}






