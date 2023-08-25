#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../shame.h"

int main(void)
{
    char* quine = strdup(readEntireFile("readEntireFile.c"));

    printf("%s\n", quine);

    free(quine);

    return 0;
}
