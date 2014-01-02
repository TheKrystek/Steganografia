#include "utils.h"
#include <stdio.h>

byte getBits(byte B, int start = 0, int len = 8){
	if (start > 8)
		start -= 8;
	B <<= start;
	B >>= (8 - len);
	return B; 
}

bool isCorrect(int a, int b, int c){
	int sum = a + b + c;
	if (sum == 8)
		return true;
	if (a == 1 && b == 1 && c == 1)
		return true;
	if (a == 1 && ((c+b)==1 || (c+b)==0)
		|| b == 1 && ((a+c)==1 || (c+a)==0)
		|| c == 1 && ((a+b)==1 || (a+b)==0))
		return true;
    for (int i = 2;i<=8;i*=2)
		if ((a == i && b == i && c == i) || sum == i)
		return true;
	return false;
}

int ceilOfDivision(int a, int b){
	if (a % b == 0)
		return a / b;
	return a/b + 1;
}

