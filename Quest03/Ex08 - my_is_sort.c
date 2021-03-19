#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_INTEGER_ARRAY

#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

bool my_is_sort(integer_array* param_1)
{
    bool result = true, result2 =true;
    for (int iLenght = param_1->size, iLoop = 0; iLoop < iLenght - 1; iLoop++)
    {
        //checking descending order
        if (param_1->array[iLoop] < param_1->array[iLoop + 1]) {
            result = false;
        }
    }
    for (int iLenght = param_1->size, iLoop = 0; iLoop < iLenght - 1; iLoop++)
    {
        //checking ascending order
        if (param_1->array[iLoop] > param_1->array[iLoop + 1]) {
            result2 = false;
        }
    }
    //if we have true or true = true
    //if we have true or false = true
    //if we have false or false = false
    return result || result2;
}
/*
int main()
{
    integer_array *ptr = (struct s_integer_array*)malloc(sizeof(struct s_integer_array));
    //y->x = (double*)((char*)y + sizeof(struct Vector));
    //ptr->array == (int *) calloc(4, sizeof(int));
    ptr->size = 4;
    ptr->array[0] = 4;
    ptr->array[1] = 5;
    ptr->array[2] = 6;
    ptr->array[3] = 7;
    my_is_sort(ptr);
}*/
