#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
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
char* my_strip(char* str)
{
    char* result = malloc(sizeof(char*) * my_strlen(str));
    int i = 0;
    int k = 0;  

    while (str[i] != '\0')
    {
        if (my_isspace(str[i]) == 0)
        {
            result[k] = str[i];
            k += 1;
            i += 1;
        }
        else if (my_isspace(str[i]) == 1 && (i == 0 || i == my_strlen(str) - 1 || my_isspace(result[k - 1]) == 1))
        {
            i += 1;
        }
        else if (my_isspace(str[i]) == 1 && my_isspace(result[k - 1]) == 0)
        {
            result[k] = str[i];
            k += 1;
        } 
    }
    return result;
    //printf("result final is: %s'\n", result);
}
/*
int main(int ac, char** av)
{
    char* str = " this        time it      will     be    more complex  . ";
    my_strip(str);
    return 0;
}*/
