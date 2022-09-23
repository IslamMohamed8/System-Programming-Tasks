#include "femtoshell.h"
#include <stdio.h>

void printFiboSeries(unsigned int number){

	int n1=0,n2=1,n3,i;    

	printf("\nThe Sequence is: %d , %d",n1,n2);//printing 0 and 1
	      
	for(i=2;i<number;++i) {    
	 	n3=n1+n2;    
	 	printf(" , %d",n3);    
	 	n1=n2;    
	 	n2=n3;    
	}  

	printf("\n");
}