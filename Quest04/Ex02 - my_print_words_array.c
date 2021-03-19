#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

int my_putchar(char c) 
{
    return write(1, &c, 1);
}

void my_putstr(char* str) 
{
    while (*str != '\0') 
    {
        my_putchar(*str++);
    }
}

void my_print_words_array(string_array* words) {
    for(int iLength = words->size, iLoop = 0; iLoop < iLength; iLoop++){
        my_putstr(words->array[iLoop]);
        my_putchar('\n');
    }
}
