#include "lib.h"
#include "file_all_functions.h"

int main()
{
    FileAllFunctions file_all_functions;

	Point funk_point;
	vector<Point> point;
	int size_points = 0;
	string filename_point = "Points.bin";


    //load+chack

    do
    {
        system("cls");
        cout << "1 - input point" << endl;
        cout << "2 - print point" << endl;
        cout << "3 - change point" << endl;
        cout << "4 - delete point" << endl;
        cout << "5 - end" << endl;

        int select;
        cout << "input number: ";
        while (!(std::cin >> select) || select < 1 || select > 5)
        {
            cout << "input number: ";
            cin.clear();
            while (cin.get() != '\n')
                continue;
        }

        if (select == 1)
        {
            size_points++;
            point.resize(size_points);

            int x;
            cout << "input x: ";
            while (!(std::cin >> x))
            {
                cout << "input x: ";
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            }

            int y;
            cout << "input y: ";
            while (!(std::cin >> y))
            {
                cout << "input y: ";
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            }

            int z;
            cout << "input z: ";
            while (!(std::cin >> z))
            {
                cout << "input z: ";
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            }

            point[size_points - 1].setX(x);
            point[size_points - 1].setY(y);
            point[size_points - 1].setZ(z);

            file_all_functions.save_elements(point, size_points, filename_point);
        }
        if (select == 2)
        {
            for (int i = 0; i < size_points; i++)
            {
                cout << "Point " << i + 1 << endl;
                point[i].print_point();
            }
        }
        if (select == 3)
        {
            if (size_points == 0)
            {
                continue;
            }

            int index;
            cout << "input index point: ";
            while (!(std::cin >> index) || index < 0 || index > size_points-1)
            {
                cout << "input index point: ";
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            }

            int x;
            cout << "input x: ";
            while (!(std::cin >> x))
            {
                cout << "input x: ";
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            }

            int y;
            cout << "input y: ";
            while (!(std::cin >> y))
            {
                cout << "input y: ";
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            }

            int z;
            cout << "input z: ";
            while (!(std::cin >> z))
            {
                cout << "input z: ";
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            }

            point[index].setX(x);
            point[index].setY(y);
            point[index].setZ(z);

            file_all_functions.save_elements(point, size_points, filename_point);
        }
        if (select == 4)
        {
            if (size_points == 0)
            {
                continue;
            }

            int index;
            cout << "input index point: ";
            while (!(std::cin >> index) || index < 0 || index > size_points - 1)
            {
                cout << "input index point: ";
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            }

            point = funk_point.remove_point(point, index);
            size_points--;
            file_all_functions.save_elements(point, size_points, filename_point);
        }
        if (select == 5)
        {
            break;
        }
        getchar();
        _getch();
    } while (true);
    return 0;
}




