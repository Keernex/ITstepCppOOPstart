#include "ReservoirEngine.h"

class ReservoirFiles
{
public:
	fstream file;
	bool check_file_empty(string filename);
	bool save_elements(Reservoir* items, int count, string filename);
	bool load_elements(Reservoir*& items, int& count, string filename);
};