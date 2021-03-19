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

char* my_union(char* str1, char* str2)
{
    int result_size = (my_strlen(str1) + my_strlen(str2)) + 1;
    //printf("%d\n", result_size);
    char* result = malloc(sizeof(char*) * result_size);
    //printf("result is %s\n", result);
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int letter = 1;    

    while (i < my_strlen(str1))
    {
        k = 0;
        letter = 1;
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
        i += 1;
    }

    while (j < my_strlen(str2))
    {
        l = 0;
        letter = 1;
        while (l < my_strlen(result))
        {
            if (str2[j] == result[l])
            {
                letter = 0;
            }
            l += 1;                
        } 
        if (letter != 0)
        {
           result[l] = str2[j];
        }
        j += 1; 
    }
   //printf("%s\n", result); 
   return result;
}
/*
int main(int ac, char** av)
{
    char* str1 = "rien";
    char* str2 = "cette phrase ne cache rien";
    my_union(str1, str2);
    return 0;
}*/
