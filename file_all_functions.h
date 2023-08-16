#ifndef FILE_ALL_FUNCTIONS_H
#define FILE_ALL_FUNCTIONS_H

#include "lib.h"


struct FileAllFunctions
{
	fstream file;

	bool Check_file_empty(string filename);

	bool save_elements(vector<> items, int count, string filename);
	bool load_elements(vector<>& items, int& count, string filename);
};


#endif