#include "Reservoir.h"

Reservoir::Reservoir()
{
	name = "";
	width = 0;
	length = 0;
	max_depth = 0;
	m2 = 0;
	m3 = 0;
	type = "";
}

Reservoir::Reservoir(string name, int width, int length, int max_depth, string type)
{
	this->name = name;
	this->width = width;
	this->length = length;
	this->max_depth = max_depth;
	m2 = width * length;
	m3 = m2 * max_depth;
	this->type = type;
}
