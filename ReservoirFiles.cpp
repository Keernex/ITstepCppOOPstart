#include "ReservoirFiles.h"

fstream file;

bool ReservoirFiles::check_file_empty(string filename)
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

bool ReservoirFiles::save_elements(Reservoir* items, int count, string filename)
{
    file.open(filename, ios::out | ios::binary);
    if (file.is_open())
    {
        file.write((char*)&count, sizeof(int));
        for (size_t i = 0; i < count; i++)
        {
            file.write((char*)&items[i], sizeof(Reservoir));
        }
        file.close();

        return true;
    }
    else
    {
        return false;
    }
}

bool ReservoirFiles::load_elements(Reservoir*& items, int& count, string filename)
{
    file.open(filename, ios::in | ios::binary);
    if (file.is_open())
    {
        file.read((char*)&count, sizeof(int));
        items = new Reservoir[count];
        for (size_t i = 0; i < count; i++)
        {
            file.read((char*)&items[i], sizeof(Reservoir));
        }
        file.close();
        return true;
    }
    else
    {
        return false;
    }
}