#include <stdio.h>

int my_string_index(char* str, char letter)
{
	  int index = 0;

    while (str[index] != '\0')
    {
        if (str[index] == letter)
        {
            return index;
        }
        index += 1;
    }
    return -1;
}
/*
int main(){
    printf("%d\n", my_string_index("abc", 'b'));
}*/
