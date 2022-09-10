#include <stdio.h>
#include <string.h>


#define MAX_INPUT_BUFFER_SIZE        100




int main(int argc , char* argv[])
{
      char userInput[MAX_INPUT_BUFFER_SIZE];

      printf("\n--> ");
      fgets(userInput, MAX_INPUT_BUFFER_SIZE, stdin);

      while(strncmp(userInput,"exit",4)){
            printf("%s\n\n",userInput);
            printf("--> ");
            fgets(userInput, MAX_INPUT_BUFFER_SIZE, stdin);
      }

      printf("Good Bye!\n");

      return 0;
}
