#include "Drone.h"

class DroneEngine
{
    void ShowDrone(vector<Drone> items)
	{
        cout << "Name: " << items.name << endl;
        cout << "Size: " << items.size << endl;
        cout << "Type: " << items.type << endl;
        cout << "Ready model: " << items.ready_model << endl;
        cout << "Max speed: " << items.max_speed << endl;
        cout << "Control type: " << items.control_type << endl;
        cout << "Engine type: " << items.engine_type << endl;
        cout << "Charging time: " << items.charging_time << endl;
        cout << "Flight time: " << items.flight_time << endl;
        cout << "Flight height: " << items.flight_height << endl;
        cout << "Weight: " << items.weight << endl;
	}
};

