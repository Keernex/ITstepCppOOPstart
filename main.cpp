#include "ReservoirFiles.h"
#include "lib.h"

int main()
{
	ReservoirFiles reservoirFiles;
	ReservoirFiles reservoirEngine;
	int count_reservoirs = 0;
	Reservoir* reservoirs = new Reservoir[count_reservoirs];
	string filename = "reservoirs.bin";

	if (reservoirFiles.check_file_empty(filename))
	{
		reservoirFiles.load_elements(reservoirs, count_reservoirs, filename);
	}

	do
	{
		system("cls");
		cout << "1 - input reservoir" << endl;
		cout << "2 - print reservoir" << endl;
		cout << "3 - end" << endl;

		int select;
		cout << "input number: ";
		while (!(std::cin >> select) || select < 1 || select > 3)
		{
			cout << "input number: ";
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}

		if (select == 1)
		{
			count_reservoirs++;
			Reservoir* new_reservoirs = new Reservoir[count_reservoirs];
			for (int i = 0; i < count_reservoirs - 1; i++) {
				new_reservoirs[i] = reservoirs[i];
			}
			delete[] reservoirs;
			reservoirs = new_reservoirs;

			string name;
			int width;
			int length;
			int max_depth;

			cout << "Enter name: ";
			cin >> name;
			cout << "Enter width: ";
			cin >> width;
			cout << "Enter length: ";
			cin >> length;
			cout << "Enter max depth: ";
			cin >> max_depth;

			reservoirs[count_reservoirs - 1].setName(name);

			reservoirs[count_reservoirs - 1].setWidth(width);
			reservoirs[count_reservoirs - 1].setLength(length);
			reservoirs[count_reservoirs - 1].setMax_depth(max_depth);
			reservoirs[count_reservoirs - 1].setM2(width * length);
			reservoirs[count_reservoirs - 1].setM3(reservoirs[count_reservoirs - 1].getM2() * max_depth);
			reservoirs[count_reservoirs - 1].setType(reservoirs[count_reservoirs - 1].getM2());

			reservoirFiles.save_elements(reservoirs, count_reservoirs, filename);
		}
		if (select == 2)
		{
			for (int i = 0; i < count_reservoirs; i++)
			{
				cout << endl;
				cout << "Name: " << reservoirs[i].getName() << endl;
				cout << "Width: " << reservoirs[i].getWidth() << endl;
				cout << "Length: " << reservoirs[i].getLength() << endl;
				cout << "Max depth: " << reservoirs[i].getMax_depth() << endl;
				cout << "M2: " << reservoirs[i].getM2() << endl;
				cout << "M3: " << reservoirs[i].getM3() << endl;
				cout << "Type: " << reservoirs[i].getType() << endl;
				cout << endl;
			}
		}
		if (select == 3)
		{
			break;
		}
		getchar();
		_getch();
	} while (true);
	return 0;
}