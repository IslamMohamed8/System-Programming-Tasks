#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "femtoshell.h"

#define MAX_INPUT_BUFFER_SIZE        100




int main(int argc , char* argv[])
{
      char userInput[MAX_INPUT_BUFFER_SIZE];

      unsigned int inputNumber;
      

      while(1){
            printf("\n--> ");
            fgets(userInput, MAX_INPUT_BUFFER_SIZE, stdin);
            
            if(!strncmp(userInput,"exit",4)){
                  break;
            }
            else if(!strncmp(userInput,"rand",4)){
                  printf("%d\n\n",randomNumber());
            }
            else if(!strncmp(userInput,"fact",4)){
                  printf("Enter a number: ");
                  inputNumber = atoi(fgets(userInput, MAX_INPUT_BUFFER_SIZE, stdin));
                  printf("Result is: %lu\n\n",factorial(inputNumber));
            }
            else if(!strncmp(userInput,"fib",3)){
                  printf("Enter a number: ");
                  inputNumber = atoi(fgets(userInput, MAX_INPUT_BUFFER_SIZE, stdin));
                  printFiboSeries(inputNumber);
            }
            else{
                  printf("You Said: %s\n\n",userInput);
            }

            
      }

      printf("Good Bye!\n");

      return 0;
}
