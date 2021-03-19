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

int my_strchr(char* str, char c)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if (str[i] == c)
        {
            return 1;
        }
        i += 1;
    }
    return 0;
}

char* inter(char* str1, char* str2)
{
    int result_size = (my_strlen(str1) + my_strlen(str2)) + 1;
    char* result = malloc(sizeof(char*) * result_size);
    int i = 0;
    int k = 0;
    int letter = 1;    

    while (i < my_strlen(str1))
    {
            k = 0;
            letter = 1;
            if (my_strchr(str2, str1[i]) == 1)
            {
                while (k < my_strlen(result))
                {
                    if (str1[i] == result[k])
                    {
                        letter = 0;  
                    }
                    k += 1;
                }
                if (letter != 0)
                {
                result[k] = str1[i];
                }                
            }
            i += 1;
    }
    return result;
    //printf("%s\n", result);
}
/*
int main(int ac, char** av)
{
    char* str1 = "ddf6vewg64f";
    char* str2 = "gtwthgdwthdwfteewhrtag6h4ffdhsd";
    inter(str1, str2);
    return 0;
}*/
