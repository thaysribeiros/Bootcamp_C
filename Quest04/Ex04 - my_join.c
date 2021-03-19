#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

int my_strlen(char *s) {
    int index = 0;

    while (s[index] != '\0') {
        index += 1;
    }
    return index;
}

char* my_strcat(char* destination, const char* source)
{
	// make ptr point to the end of destination string
	char* ptr = destination + my_strlen(destination);

	// Appends characters of source to the destination string
	while (*source != '\0') {
		*ptr++ = *source++;
    }

	// null terminate destination string
	*ptr = '\0';

	// destination is returned by standard strcat()
	return destination;
}
      
// 0# we need calculate the size (stringS + letter + \0)
// 1# allocated a memory space
// 2# copy the array inside the result string
int calculating_size(string_array* ptr) {
    int index = 0;
    int sum   = 0;

    while (index < ptr->size) {
        sum += my_strlen(ptr->array[index]);
        index += 1;
    }
    return sum;
}

char* my_join(string_array* ptr, char* letter) {

    int iLoop = 0;
    int len = ptr->size;
    char* result;

    int result_size = calculating_size(ptr) + len;

    result = malloc(sizeof(char) * result_size);
    
    if (!ptr->array[iLoop] | !letter)
    {
        return NULL;
    }
    while (iLoop < len) {
       //printf("%s", ptr->array[iLoop]);
        my_strcat(result, ptr->array[iLoop]);
        if (iLoop < len - 1) {
            my_strcat(result, letter);
            //printf("%c", *letter);
        }
        iLoop += 1;
    }
    return result;
}
/*
int main(int ac, char** av) {
    
    string_array ptr;
    char* letter = "-";
    ptr.size = 4;
    ptr.array = malloc(ptr.size * sizeof(char**));
    ptr.array[0] = "Hello";
    ptr.array[1] = "Baby";
    ptr.array[2] = "Yoda";
    ptr.array[3] = "!";
    my_join(&ptr, letter);
//    free(ptr->array);
//    free(ptr);
}*/
