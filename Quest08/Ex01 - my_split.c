#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
int my_strlen(char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

int count_words(char* str, char sep)
{
    int index = 0; 
    int words = 0;
    while (str[index] != '\0')
    {
        while (str[index] == sep)
        {
            index += 1;
        }
        if (str[index] != '\0')
        {
            words += 1;
        }
        while (str[index] != '\0' && str[index] != sep)
        {
            index += 1;
        }
    }
    return words;
}

string_array* my_split(char* str1, char* str2)
{
    int words = count_words(str1, str2[0]);
    string_array *result;
    result = malloc(sizeof(string_array));
    result->size = words;
    result->array = malloc(words * sizeof(char*));

    int m = 0;
    int j = 0;
    int k = 0;

    while (m < words)
    {
        result->array[m] = malloc(my_strlen(str1) * sizeof(char));
        m += 1;
    }
    m = 0;
    while (str1[j] != '\0')
    {
        while (str1[j] == str2[0])
        {
            m += 1;    
            j += 1;
            k = 0;      
        }
        while (str1[j] != str2[0] && str1[j] != '\0')
        {   
            result->array[m][k] = str1[j];
            j += 1;
            k += 1;
        }            
    }
    return result;
    /*printf("result -> size %d\n", result->size);
        for (int l = 0; l < result->size; l++)
        {
            printf("result -> array[%d] %s\n", l, result->array[l]);
        }*/
}
/*
int main(int ac, char** av)
{
    char* str1 = "abc def gh-!";
    char* str2 = "-";
    my_split(str1, str2);
    return 0;
}*/
