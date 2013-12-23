#include "pixel.h"
#include <stdio.h>

	Pixel::Pixel(){
		colors = new Color*[3];
		for (int i=0; i< 3; i++)
		{
			colors[i] = new Color(0);
		}
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

	void Pixel::printColors(){
		printf("(%3d, %3d, %3d)",this->colors[0]->getColor(),this->colors[1]->getColor(),this->colors[2]->getColor());
	}




/*
	void Pixel::saveData(byte data){
		red->setLastBits(getBits(data,0,r_bits),r_bits);	
		green->setLastBits(getBits(data,r_bits,g_bits),g_bits);	
		blue->setLastBits(getBits(data,r_bits+g_bits,b_bits),b_bits);
	}

	byte Pixel::loadData(){
		byte tmp = 0;
		tmp |= ((red->getLastBits(r_bits)) << (8-r_bits));
		tmp |= ((green->getLastBits(g_bits)) << (8-r_bits-g_bits));
		tmp |= ((blue->getLastBits(b_bits)) << (8-r_bits-g_bits-b_bits));
		return tmp;
	}
*/