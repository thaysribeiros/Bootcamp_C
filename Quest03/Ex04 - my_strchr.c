#include <stdio.h>

char* my_strchr(char* str, char c) {

    char* position = NULL;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            position = &str[i];
            break;
        }
        i += 1;
    }
    return position;
}
/*
int main()
{
    char *str = "abcabc";
    char letter = 'b';
    char *position = my_strchr(str, letter);
    printf("%s\n", position);
    return 0;
}*/
