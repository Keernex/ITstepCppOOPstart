#include "DroneFile.h"

int main()
{
    DroneFile droneFile;
    DroneEngine droneEngine;
    Drone drone;
    DroneSpace droneSpace;

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
        cout << "1 - input drone" << endl;
        cout << "2 - print drone" << endl;
        cout << "3 - change drone" << endl;
        cout << "4 - delete drone" << endl;
        cout << "5 - control drone" << endl;
        cout << "6 - end" << endl;

        int select;
        cout << "input number: ";
        while (!(std::cin >> select) || select < 1 || select > 6)
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
                drones[i].printDrone();
            }
        }
        if (select == 3)
        {
            if (size_drones == 0)
            {
                continue;
            }

            int index;
            cout << "input index drone: ";
            while (!(std::cin >> index) || index < 0 || index > size_drones - 1)
            {
                cout << "input index drone: ";
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            }

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
            drones[index].setName(name);

            cout << "Enter size: ";
            cin >> size;
            drones[index].setSize(size);

            cout << "Enter type: ";
            cin >> type;
            drones[index].setType(type);

            cout << "Enter ready model: ";
            cin >> ready_model;
            drones[index].setReady_model(ready_model);

            cout << "Enter max speed: ";
            cin >> max_speed;
            drones[index].setMax_speed(max_speed);

            cout << "Enter control type: ";
            cin >> control_type;
            drones[index].setControl_type(control_type);

            cout << "Enter engine type: ";
            cin >> engine_type;
            drones[index].setEngine_type(engine_type);

            cout << "Enter charging time: ";
            cin >> charging_time;
            drones[index].setCharging_time(charging_time);

            cout << "Enter flight time: ";
            cin >> flight_time;
            drones[index].setFlight_time(flight_time);

            cout << "Enter flight height: ";
            cin >> flight_height;
            drones[index].setFlight_height(flight_height);

            cout << "Enter weight: ";
            cin >> weight;
            drones[index].setWeight(weight);

            droneFile.save_elements(drones, size_drones, filename_drone);
        }
        if (select == 4)
        {
            if (size_drones == 0)
            {
                continue;
            }

            int index;
            cout << "input index drone: ";
            while (!(std::cin >> index) || index < 0 || index > size_drones - 1)
            {
                cout << "input index drone: ";
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            }

            drones = drone.removeDrone(drones, index);
            size_drones--;
            droneFile.save_elements(drones, size_drones, filename_drone);
        }
        if (select == 5)
        {
            do
            {
                system("cls");
                cout << "1 - top drone" << endl;
                cout << "2 - bottom drone" << endl;
                cout << "3 - left drone" << endl;
                cout << "4 - right drone" << endl;
                cout << "5 - before drone" << endl;
                cout << "6 - back drone" << endl;
                cout << "7 - end" << endl;

                int select;
                cout << "(control) input number: ";
                while (!(std::cin >> select) || select < 1 || select > 7)
                {
                    cout << "(control) input number: ";
                    cin.clear();
                    while (cin.get() != '\n')
                        continue;
                }
                if (select == 1)
                {
                    cout << "The drone rises one inch" << endl;
                    cout << "The drone rises one inch" << endl;
                    droneSpace.topZ();
                    droneSpace.print_DroneSpace();
                }
                if (select == 2)
                {
                    cout << "ddddd" << endl;
                    droneSpace.bottomZ();
                    droneSpace.print_DroneSpace();
                }
                if (select == 3)
                {
                    cout << "ddddd" << endl;
                    droneSpace.leftX();
                    droneSpace.print_DroneSpace();
                }
                if (select == 4)
                {
                    cout << "ddddd" << endl;
                    droneSpace.rightX();
                    droneSpace.print_DroneSpace();
                }
                if (select == 5)
                {
                    cout << "ddddd" << endl;
                    droneSpace.beforeY();
                    droneSpace.print_DroneSpace();
                }
                if (select == 6)
                {
                    cout << "ddddd" << endl;
                    droneSpace.backY();
                    droneSpace.print_DroneSpace();
                }
                if (select == 7)
                {
                    break;
                }
                _getch();
            } while (true);
        }
        if (select == 6)
        {
            break;
        }
        getchar();
        _getch();
    } while (true);
    return 0;
}