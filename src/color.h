#include "utils.h"

class Color
{

	byte color; 
public:
	Color(byte);
	Color();

	void setColor(byte);
	byte getColor();
	void printColor();
    int value();
	void setLastBits(byte, int = 8);
	byte getLastBits(int = 8);
	void printLastBits(int = 8);

	~Color();

};
