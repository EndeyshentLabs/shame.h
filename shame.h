#ifndef SHAME_H_
#define SHAME_H_

#include <stddef.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

const char* readEntireFile(const char* fileName);

#define VECTOR_INITIAL_CAPACITY 32

#define Vector(T) \
    struct { \
        T * data; \
        size_t size; \
        size_t capacity; \
    }

#define vector_init(vec) \
    do { \
        (vec).capacity = VECTOR_INITIAL_CAPACITY; \
        (vec).size = 0; \
        (vec).data = malloc((vec).capacity * sizeof(__typeof__(*(vec).data))); \
    } while(0);


#define vector_reserve(vec) \
    do { \
        if ((vec).size == (vec).capacity) { \
            (vec).capacity *= 2; \
            (vec).data = realloc((vec).data, (vec).capacity * sizeof(__typeof__(*(vec).data))); \
            assert((vec).data != NULL && "BUY MORE RAM lol"); \
        } \
    } while(0);

#define vector_push(vec, element) \
    do { \
        vector_reserve(vec); \
        (vec).data[(vec).size++] = element; \
    } while(0)

#define vector_free(vec) \
    do { \
        for (size_t _vector_free_i = 0; _vector_free_i < (vec).size; _vector_free_i++) { \
            free(&(vec).data[_vector_free_i]); \
        } \
        free((vec).data); \
        (vec).size = 0; \
        (vec).capacity = 0; \
    } while(0);

#endif // SHAME_H_
