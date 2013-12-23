#include "color.h"

class Pixel
{
	


public:
	Color** colors;
	
	Pixel(Color*, Color*, Color*);
	Pixel(byte, byte, byte);
	Pixel();
	~Pixel();
	void printColors();

};

