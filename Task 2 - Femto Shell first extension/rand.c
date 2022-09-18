#include "femtoshell.h"
#include <stdlib.h>
#include <time.h>


int randomNumber(void){

	time_t t;
	srand((unsigned int) time(&t));
	int number = rand();

	
	return number;
}