#include "lib.h"

class Reservoir
{
private:
	string name;
	int width;
	int length;
	int max_depth;
	int m2;
	int m3;
	string type;
public:
	Reservoir();
	Reservoir(string name, int width, int length, int max_depth, string type);
	~Reservoir() = default;


	Reservoir(Reservoir* reservoirs)
	{
		this->name = reservoirs->name;
		this->width = reservoirs->width;
		this->length = reservoirs->length;
		this->max_depth = reservoirs->max_depth;
		this->m2 = reservoirs->m2;
		this->m3 = reservoirs->m3;
		this->type = reservoirs->type;
	}

	Reservoir(Reservoir& reservoirs)
	{
		this->name = reservoirs.name;
		this->width = reservoirs.width;
		this->length = reservoirs.length;
		this->max_depth = reservoirs.max_depth;
		this->m2 = reservoirs.m2;
		this->m3 = reservoirs.m3;
		this->type = reservoirs.type;
	}

	inline void setName(string name) { this->name = name; }
	inline void setWidth(int width) { this->width = width; }
	inline void setLength(int length) { this->length = length; }
	inline void setMax_depth(int max_depth) { this->max_depth = max_depth; }
	inline void setM2(int m2) { this->m2 = m2; }
	inline void setM3(int m3) { this->m3 = m3; }
	inline void setType(int m2)
	{
		if (m2 >= 11472000)
		{
			this->type = "sea";
		}
		else if (m2 >= 200 and m2 < 11472000)
		{
			this->type = "lake";
		}
		else if (m2 < 200 and m2 > 10)
		{
			this->type = "pond";
		}
		else
		{
			this->type = "puddle";
		}
	}

	inline string getName() const { return name; }
	inline int getWidth()const { return width; }
	inline int getLength()const { return length; }
	inline int getMax_depth()const { return max_depth; }
	inline int getM2()const { return m2; }
	inline int getM3() const { return m3; }
	inline string getType()const { return type; }
};