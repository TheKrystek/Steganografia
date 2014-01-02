#include "pixel.h"
#include <stdio.h>

	Pixel::Pixel(){
		colors = new Color*[3];
		for (int i=0; i< 3; i++)
		{
			colors[i] = new Color(0);
		}
	}

	Pixel::~Pixel(){
		delete this->colors[0];
		delete this->colors[1];
		delete this->colors[2];
		delete [] this->colors;
	}

	Pixel::Pixel(byte red, byte green, byte blue){
		colors = new Color*[3];
		this->colors[0] = new Color(red);
		this->colors[1] = new Color(green);
		this->colors[2] = new Color(blue);
	}

	Pixel::Pixel(Color* red, Color* green, Color* blue)
	{
		this->colors[0] = red;
		this->colors[1] = green;
		this->colors[2] = blue;
	}

    int Pixel::red(){
        return this->colors[0]->value();
    }


    int Pixel::green(){
        return this->colors[1]->value();
    }


    int Pixel::blue(){
        return this->colors[2]->value();
    }
	void Pixel::printColors(){
		printf("(%3d, %3d, %3d)",this->colors[0]->getColor(),this->colors[1]->getColor(),this->colors[2]->getColor());
	}
