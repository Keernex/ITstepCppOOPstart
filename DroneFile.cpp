#include "DroneFile.h"

bool DroneFile::Check_file_empty(string filename)
{
	ifstream file(filename, ios::binary);

	if (!file)
	{
		return true;
	}

	file.seekg(0, ios::end);
	streampos fileSize = file.tellg();

	if (fileSize == 0)
	{
		return false;
	}

	return true;
}

bool DroneFile::save_elements(vector<Drone> items, int count, string filename)
{
	file.open(filename, ios::out | ios::binary);
	if (file.is_open())
	{
		file.write((char*)&count, sizeof(int));
		for (size_t i = 0; i < count; i++)
		{
			file.write((char*)&items[i], sizeof(Drone));
		}
		file.close();
		return true;
	}
	else
	{
		return false;
	}
}

bool DroneFile::load_elements(vector<Drone>& items, int& count, string filename)
{
	file.open(filename, ios::in | ios::binary);
	file.read((char*)&count, sizeof(int));
	items.resize(count);
	if (file.is_open())
	{
		for (size_t i = 0; i < count; i++)
		{
			file.read((char*)&items[i], sizeof(Drone));
		}
		file.close();
		return true;
	}
	else
	{
		return false;
	}
}