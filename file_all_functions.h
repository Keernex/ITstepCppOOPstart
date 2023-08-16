#ifndef FILE_ALL_FUNCTIONS_H
#define FILE_ALL_FUNCTIONS_H

#include "lib.h"
#include "point.h"


struct FileAllFunctions
{
	fstream file;

	bool Check_file_empty(string filename);

	bool save_elements(vector<Point> items, int count, string filename);
	bool load_elements(vector<Point>& items, int& count, string filename);
};


#endif