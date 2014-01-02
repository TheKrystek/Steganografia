#include "pixel.h"
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

class Image{
    int size;
	int *bits;
	int bitsSum;


	public:
    vector<Pixel*> pixels; // lista pointerow na pixele

    Image(int);
		~Image();
		void display();
		void encode(std::string); 
		string decode(int); 
		void setNumberOfUsedBits(short, short, short);
};
