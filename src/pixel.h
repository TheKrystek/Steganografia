#include "color.h"

class Pixel
{
	


public:
	Color** colors;
    int red();
    int green();
    int blue();
	Pixel(Color*, Color*, Color*);
	Pixel(byte, byte, byte);
	Pixel();
	~Pixel();
	void printColors();

};

