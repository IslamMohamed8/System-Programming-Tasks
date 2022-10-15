#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char *argv[])
{

    errno = 0;
    /* The function itself will allocate a big enough buffer dynamically */
    char *currentDirectory = getcwd(NULL, 0);

    if (currentDirectory == NULL) {
        perror("getcwd");
        exit(EXIT_FAILURE);
    }

    printf("%s\n", currentDirectory);
    free(currentDirectory);

    exit(EXIT_SUCCESS);

}
