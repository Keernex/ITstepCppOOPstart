#include "Drone.h"

Drone::Drone()
{
    name = "";
    size = "";
    type = "";
    ready_model = "";
    max_speed = "";
    control_type = "";
    engine_type = "";
    charging_time = "";
    flight_time = "";
    flight_height = "";
    weight = "";
}

Drone::Drone(string name, string size, string type, string ready_model, string max_speed, string control_type, string engine_type, string charging_time, string flight_time, string flight_height, string weight)
{
    this->name = name;
    this->size = size;
    this->type = type;
    this->ready_model = ready_model;
    this->max_speed = max_speed;
    this->control_type = control_type;
    this->engine_type = engine_type;
    this->charging_time = charging_time;
    this->flight_time = flight_time;
    this->flight_height = flight_height;
    this->weight = weight;
}

void Drone::printDrone()
{
    cout << "Name: " << name << endl;
    cout << "Size: " << size << endl;
    cout << "Type: " << type << endl;
    cout << "Ready model: " << ready_model << endl;
    cout << "Max speed: " << max_speed << endl;
    cout << "Control type: " << control_type << endl;
    cout << "Engine type: " << engine_type << endl;
    cout << "Charging time: " << charging_time << endl;
    cout << "Flight time: " << flight_time << endl;
    cout << "Flight height: " << flight_height << endl;
    cout << "Weight: " << weight << endl;
}
vector<Drone> Drone::removeDrone(vector<Drone> items, int index)
{
    if (index >= 0 && index < items.size())
    {
        items.erase(items.begin() + index);
    }
    return items;
}

DroneSpace::DroneSpace()
{
    x = 0;
    y = 0;
    z = 0;
}

DroneSpace::DroneSpace(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

DroneSpace::~DroneSpace()
{
    x = 0;
    y = 0;
    z = 0;
}

void DroneSpace::print_DroneSpace()
{
    cout << "(" << x << "," << y << "," << z << ")" << endl;
}
