#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

int my_strlen(char* str){
    int len = 0;
    while (str[len] != '\0') {
        len += 1;
    }
    return len;
}

integer_array* my_count_on_it(string_array* str) {

    integer_array *ptr;
    ptr = (integer_array *)malloc(sizeof(integer_array));
    ptr->size = str->size;
    ptr->array = malloc(ptr->size * sizeof(int));


    int iLoop = 0;
    int iLength = str->size; 
    while (iLoop < iLength){
        ptr->array[iLoop] = my_strlen(str->array[iLoop]);
        iLoop += 1;
    }
    return ptr;
    }
/*
void my_print_count_on_it(string_array* str) {
    integer_array *ptr;
    ptr = (integer_array *)malloc(sizeof(integer_array));
    ptr->size = str->size;
    ptr->array = (int*)malloc(ptr->size * sizeof(int));
    int iLoop = 0;
    int iLength = str->size; 
    while (iLoop < iLength){
        ptr->array[iLoop] = my_strlen(str->array[iLoop]);           
        printf("%d, ", my_strlen(str->array[iLoop]));
        iLoop += 1;
    }
}
int main(){ 
    string_array *ptr;
    ptr = (string_array *)malloc(sizeof(string_array));
    ptr->size = 4;
    ptr->array = malloc(ptr->size * sizeof(char**)); 
    ptr->array[0] = "Hello";
    ptr->array[1] = "Baby";
    ptr->array[2] = "Yoda";
    ptr->array[3] = "!";
    my_print_count_on_it(ptr);
    free(ptr);
}*/
