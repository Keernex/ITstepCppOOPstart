#include "DroneEngine.h"

struct DroneFile
{
	fstream file;
	bool Check_file_empty(string filename);
	bool save_elements(vector<Drone> items, int count, string filename);
	bool load_elements(vector<Drone>& items, int& count, string filename);
};