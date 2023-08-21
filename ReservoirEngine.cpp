#include "ReservoirEngine.h"

void ReservoirEngine::ShowReservoir(Reservoir* reservoir)
{
	cout << "Name: " << reservoir->getName() << endl;
	cout << "Width: " << reservoir->getWidth() << endl;
	cout << "Length: " << reservoir->getLength() << endl;
	cout << "Max Depth: " << reservoir->getMax_depth() << endl;
	cout << "M2: " << reservoir->getM2() << endl;
	cout << "M3: " << reservoir->getM3() << endl;
	cout << "Type: " << reservoir->getType() << endl;
	cout << endl;
}