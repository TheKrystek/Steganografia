#include <stdio.h>
#include <iostream>
#include "utils.h"
#include <string>
#include "image.h"

using namespace std;





int main(){

Image image(6,6);
//image.display();
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
	cout << "dupa";
return 0;
}
