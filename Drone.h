#include "lib.h"

class Drone
{
private:
    string name;
    string size;
    string type;
    string ready_model;
    string max_speed;//km / h
    string control_type;
    string engine_type;
    string charging_time;//hours
    string flight_time; //minutes
    string flight_height; // m
    string weight;//g
public:
    Drone();
    Drone(string name, string size, string type, string ready_model, string max_speed, string control_type, string engine_type, string charging_time, string flight_time, string flight_height, string weight);

    inline string getName() const { return name; }
    inline string getSize() const{ return size; }
    inline string getType() const{ return type; }
    inline string getReady_model() const{ return ready_model; }
    inline string getMax_speed() const{ return max_speed; }
    inline string getControl_type() const{ return control_type; }
    inline string getEngine_type() const{ return engine_type; }
    inline string getCharging_time() const{ return charging_time; }
    inline string getFlight_time() const{ return flight_time; }
    inline string getFlight_height() const{ return flight_height; }
    inline string getWeight() const{ return weight; }

    inline void setName(string name) { this->name = name; }
    inline void setSize(string size) { this->size = size; }
    inline void setType(string type) { this->type = type; }
    inline void setReady_model(string ready_model) { this->ready_model = ready_model; }
    inline void setMax_speed(string max_speed) { this->max_speed = max_speed; }
    inline void setControl_type(string control_type) { this->control_type = control_type; }
    inline void setEngine_type(string engine_type) { this->engine_type = engine_type; }
    inline void setCharging_time(string charging_time) { this->charging_time = charging_time; }
    inline void setFlight_time(string flight_time) { this->flight_time = flight_time; }
    inline void setFlight_height(string flight_height) { this->flight_height = flight_height; }
    inline void setWeight(string weight) { this->weight = weight; }

    void printDrone();
    vector<Drone> removeDrone(vector<Drone> items, int index);
};

class DroneSpace
{
private:
    int x;
    int y;
    int z;
public:
    DroneSpace();
    DroneSpace(int x, int y, int z);
    ~DroneSpace();

    inline int getX() const { return x; }
    inline int getY() const { return y; }
    inline int getZ() const { return z; }

    inline void setX(int x) { this->x = x; }
    inline void setY(int y) { this->y = y; }
    inline void setZ(int z) { this->z = z; }

    inline void topZ() { z++; }
    inline void bottomZ() { z--; }
    inline void leftX() { x++; }
    inline void rightX() { x--; }
    inline void beforeY() { x++; }
    inline void backY() { x--; }

    void print_DroneSpace();
};


//class SharedObjectInGame 
//{
//    int x;//4
//    int y;//4
//};
//class UniqueObjectInGame
//{   
//    Image image;
//    string name;
//    int level;
//
//};
//class ObjectInGame
//{    
//    SharedObjectInGame * sharedObjectInGame = new SharedObjectInGame[100000000];
//    UniqueObjectInGame uniqueObjectInGame;
//};