#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len += 1;
    }
    return len;
}

int my_isupper(char letter)
{
    if (letter >= 97 && letter <= 122)
    {
        return 0;
    }
    if (letter >= 65 && letter <= 90)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int my_islower(char letter)
{
    if (letter >= 97 && letter <= 122)
    {
        return 1;
    }
    if (letter >= 65 && letter <= 90)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}

int my_isspace(char space)
{
    if (space == 32 || space == ' ' || space == '\f' || space == '\n' || space == '\r' || space == '\t' || space == '\v' || space == '\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char* rcapitalize(char* str)
{
    char* result = malloc(sizeof(char*) * my_strlen(str) + 1);
    int i = 0; 
    int len = my_strlen(str);

    while (i <= len)
    {
        if (my_isspace(str[i]) == 0)
        {
            if (my_isupper(str[i]) == 1)
            {
                result[i] = str[i] + 32;
            }
            else
            {
                result[i] = str[i];
            }
        }
        if (my_isspace(str[i]) == 1) 
        {
            if (my_islower(str[i - 1]) == 1)
            {
                result[i - 1] = str[i - 1] - 32;
            }
            if (my_isupper(str[i - 1]) == 1)
            {
                result[i - 1] = str[i - 1];
            }
            result[i] = str[i];
        }
        i++;
    }
    //printf("result final is: %s\n", result);
    return result;
}
/*
int main(int ac, char** av)
{
    char* str = "   But... This iS not THAT COMPLEX";
    rcapitalize(str);
    return 0;
}*/
