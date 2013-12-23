#include "color.h"
#include <iostream>
#include <stdio.h>

using namespace std;

	Color::Color(){
		this->setColor(0);
	}


	Color::Color(byte color){
		this->setColor(color);
	}

	void Color::setColor(byte color){
		this->color = color;
	}

	byte Color::getColor(){
		return this->color;
	}
	void Color::printColor(){
		printf("%d #%X\n",this->color,this->color);
	}

	void Color::setLastBits(byte color, int bits){
		this->color >>= bits;
		this->color <<= bits;
		this->color |= color; 
	}

	byte Color::getLastBits(int bits){
		byte color = this->color;
		color <<= (8-bits);
		color >>= (8-bits);
		return color;
	}

	void Color::printLastBits(int bits){
		byte tmp = this->getLastBits(bits);
		printf("%d #%X\n",tmp,tmp);
	}

	Color::~Color(){
		cout << endl;
	}