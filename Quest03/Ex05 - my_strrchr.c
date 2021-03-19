#include <stdio.h>

char* my_strrchr(char* str, char c)
{
    char *position = NULL;
    int i = 0;
    
    while (str[i] != '\0')
    {
        if (str[i] == c) 
        {
            position = &str[i];
            i += 1;
        }
        else
        {
            i += 1;
        }        
    }
    return position;
}
/*
int main()
{
    char *str = "abcabc";
    char letter = 'b';
    char *position = my_strrchr(str, letter);
    printf("%s\n", position);
    return 0;
}*/
