#include "pixel.h"
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

class Image{
	int cols, rows;
	int *bits;
	int bitsSum;

	vector<Pixel*> pixels; // lista pointerow na pixele

	public:
		Image(int x, int y);
		void display();
		void encode(std::string); 
		string decode(int); 
		void setNumberOfUsedBits(short, short, short);
};