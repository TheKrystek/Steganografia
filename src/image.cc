#include "image.h"
#include <string>
#include "utils.h"

#define DEBUG

template<typename T>
void toBin(T bin){
	int len = sizeof(bin) * 8; // rozmiar w bitach
	printf("%d\t",bin);
	for (int i=len-1;i>=0;i--)
		printf("%d",((bin >> i) & 1));
	printf("\n");
}

Image::Image(int x, int y){
	this->cols = x;
	this->rows = y;

	bits = new int[3];
	this->setNumberOfUsedBits(2,2,2);
	// na probe wypelnij pustymi pixelami 000
	for (int i =0;i<x*y;++i){
		Pixel* p = new Pixel();
		pixels.push_back(p);
	}
}

void Image::display(){
	int i = 0;
	for (vector<Pixel*>::iterator it = pixels.begin(); it!=pixels.end();it++){
		if (i >0 && i%cols == 0)
			printf("\n");
		(*it)->printColors();
		i++;
	}
	printf("\n");
} 

void Image::setNumberOfUsedBits(short r, short g, short b)	{
		if (	   ((r >= 0) && (r<= 8)) 
				&& ((g >= 0) && (g<= 8))
				&& ((r >= 0) && (b<= 8)))
		{
			this->bits[0] = r;
			this->bits[1] = g;
			this->bits[2] = b;
			this->bitsSum = r + g + b;
		}
}

void Image::encode(std::string message){
	//printf("rozmiar wiadomosci: %d",message.length());
	unsigned int index = 0;
	int usedPixels = ceilOfDivision(message.length() * 8, this->bitsSum);

	int start = 0;
	while (index < message.length()){
		for (int p = 0; p < usedPixels; p++){
			for (int i = 0; i < 3; i++){
				#ifdef DEBUG
					printf("p %d, i %d, start %d, index %d, bits %d \n",p,i,start,index,bits[i]);
				#endif
				pixels[p]->colors[i]->setLastBits(getBits(message[index],start,bits[i]),bits[i]);
				start += bits[i];
				if (start >= 8){
					start = 0;
					index++;
				}	
			}
		}
	}
}

std::string Image::decode(int msgLength){
	byte* buff = new byte[msgLength]; //bufor o długosci wiadomosci 
	int index = 0;
	int offset = 0;
	int bitsReaded = 0;	
	int usedPixels = ceilOfDivision(msgLength * 8, this->bitsSum);
	// Wyzerowanie bufora	
	for (int i=0;i<msgLength;i++)
		buff[i] = 0;

	while (index < msgLength){
		for (int p = 0; p < usedPixels; p++){
			for (int i = 0; i < 3; i++){			
				offset += bits[i];
				buff[index] |= ((pixels[p]->colors[i]->getLastBits(bits[i])) << (8 - offset));
				bitsReaded += bits[i];
				#ifdef DEBUG
				printf("p %d, i %d, start %d, index %d, bits %d, buff %c",p,i,offset,index,bits[i],buff[index]);
				toBin((byte)buff[index]);
				#endif
				if (offset >= 8){
					offset = 0;
					index++;
				}	
				if (bitsReaded == msgLength * 8){
					p = usedPixels;
					index = msgLength;
					break;
				}
			}
		}
	}
	string tmp = "";
	for (int i=0;i<msgLength;i++)
		tmp += buff[i];
	return tmp;
}

