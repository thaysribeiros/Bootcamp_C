#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY

typedef struct s_integer_array
{
    int size;
    int array[];
} integer_array;
#endif

void my_first_struct(integer_array* integer_array)
{
    printf("%d\n", integer_array->size);
    for(int iLength = integer_array->size, iLoop = 0; iLoop < iLength; iLoop++)
        printf("%d\n", integer_array->array[iLoop]);
}
