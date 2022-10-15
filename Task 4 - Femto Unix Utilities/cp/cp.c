#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    FILE *readFile;
    FILE *writeFile;
    char buffer;

    readFile = fopen(argv[1], "r");
    if (readFile == NULL) {
        printf("File opening failed for %s", argv[1]);
        exit(0);
    }


    writeFile = fopen(argv[2], "w");
    if (writeFile == NULL) {
        printf("File opening failed for %s", argv[2]);
        exit(0);
    }

    /* copy file content to the other file */
    buffer = fgetc(readFile);
    while (buffer != EOF) {
        fputc(buffer, writeFile);
        buffer = fgetc(readFile);
    }

    fclose(readFile);
    fclose(writeFile);

    return 0;
}
