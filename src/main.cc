#include <stdio.h>
#include <iostream>
#include "utils.h"
#include <string>
#include "image.h"
using namespace std;

int main(){

	// Stworzenie przykładowego obrazu o rozmiarach 6x6 px
	Image image(6,6);
	int a = 3;
	int b = 2;
	int c = 3;
	if (isCorrect(a,b,c)){
		image.setNumberOfUsedBits(a,b,c);
		image.encode("abc");
		image.display();
		cout << image.decode(3);
	}
	else
		cout << "Wspolczynniki nie sa poprawne";

	return 0;
}
