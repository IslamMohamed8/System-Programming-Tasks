#include "femtoshell.h"
#include <stdio.h>


unsigned long factorial(unsigned int num){
	unsigned long result = 1;
	for(int i = num;i>1;i--){
		result *= i;
	}

	return result;
}