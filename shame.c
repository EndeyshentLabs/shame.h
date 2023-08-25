#include "shame.h"

#include <stdio.h>
#include <stdlib.h>

const char* readEntireFile(const char *fileName)
{
    FILE* f = fopen(fileName, "rb");
    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    fseek(f, 0, SEEK_SET);

    char* string = malloc(fsize + 1);
    fread(string, fsize, 1, f);
    fclose(f);

    string[fsize] = 0;

    return string;
}
