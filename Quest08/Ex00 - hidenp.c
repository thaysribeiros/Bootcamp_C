#include <unistd.h>
#include <stdio.h>

int my_strlen(char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}
int hidenp(char* str1, char* str2 )
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    int i = 0;
    int j = 0;
    while (i < len2 && j < len1)
    {
        if (str1[j] == str2[i])
        {
            j += 1;
        }
        i += 1;
    }
    
    if (j == len1 || *str1 == '\0' )
    {
        return 1;
        //printf("str1 is in str2; j = %d && len1 = %d\n", j, len1);
    }
    else
    {
        return 0;
        //printf("str1 is NOT in str1; j = %d && len1 = %d\n", j, len1);
    }
}   
/*
int main(int ac, char** av)
{
    char* str1 = "";
    char* str2 = "btarc";
    hidenp(str1, str2);
    return 0;
}*/
