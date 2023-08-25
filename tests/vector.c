#include "../shame.h"

#include <stdio.h>

typedef Vector(int) IntVector;

int main(void)
{
    IntVector vector;
    vector_init(vector);

    vector_push(vector, 12);
    vector_push(vector, 24);
    vector_push(vector, 87);

    for (size_t i = 0; i < vector.size; i++) {
        printf("Index: %zu = %d\n", i, vector.data[i]);
    }

    vector_free(vector);

    return 0;
}
