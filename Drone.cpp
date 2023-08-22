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
