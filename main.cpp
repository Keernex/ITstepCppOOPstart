#include "DroneFile.h"

int main()
{
    DroneFile droneFile;
    DroneEngine droneEngine;
    Drone drone;

    vector<Drone> drones;
    int size_drones = 0;
    string filename_drone = "Drones.bin";

    if (droneFile.Check_file_empty(filename_drone))
    {
        droneFile.load_elements(drones, size_drones, filename_drone);
    }

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
            size_drones++;
            drones.resize(size_drones);

            string name;
            string size;
            string type;
            string ready_model;
            string max_speed;
            string control_type;
            string engine_type;
            string charging_time;
            string flight_time;
            string flight_height;
            string weight;

            cout << "Enter name: ";
            cin >> name;
            drones[size_drones - 1].setName(name);

            cout << "Enter size: ";
            cin >> size;
            drones[size_drones - 1].setSize(size);

            cout << "Enter type: ";
            cin >> type;
            drones[size_drones - 1].setType(type);

            cout << "Enter ready model: ";
            cin >> ready_model;
            drones[size_drones - 1].setReady_model(ready_model);

            cout << "Enter max speed: ";
            cin >> max_speed;
            drones[size_drones - 1].setMax_speed(max_speed);

            cout << "Enter control type: ";
            cin >> control_type;
            drones[size_drones - 1].setControl_type(control_type);

            cout << "Enter engine type: ";
            cin >> engine_type;
            drones[size_drones - 1].setEngine_type(engine_type);

            cout << "Enter charging time: ";
            cin >> charging_time;
            drones[size_drones - 1].setCharging_time(charging_time);

            cout << "Enter flight time: ";
            cin >> flight_time;
            drones[size_drones - 1].setFlight_time(flight_time);

            cout << "Enter flight height: ";
            cin >> flight_height;
            drones[size_drones - 1].setFlight_height(flight_height);

            cout << "Enter weight: ";
            cin >> weight;
            drones[size_drones - 1].setWeight(weight);

            droneFile.save_elements(drones, size_drones, filename_drone);
        }

        if (select == 2)
        {
            for (int i = 0; i < size_drones; i++)
            {
                cout << "Drone " << i + 1 << endl;
                droneEngine.ShowDrone(drones[i]);
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
            while (!(std::cin >> index) || index < 0 || index > size_points - 1)
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