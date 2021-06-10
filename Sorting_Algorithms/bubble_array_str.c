#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len += 1;
    }
    return len;
}

char* my_strcpy(char* str1, char* str2)
{
    int i = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i += 1;
    }
    str1[i] = '\0';
    printf("str1 = %s, str2 = %s\n", str1, str2);
    return str1;
}

int my_strcmp(char* str1, char* str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
    {
        i += 1;
    }
    return (str1[i] - str2[i]);
}

void print_array(char** array, int n)
{
    int i = 0;

    printf("star_wars[] = {");
    while (i < n)
    {
        printf("%s", array[i]);
        if(i < n - 1)
        {
            printf(", ");
        }
        i += 1;
    }
    printf("}\n");    
}

void my_sort_array(char** array, int n)
{
    int i = 0;
    int j;
    char* temp = malloc(sizeof(char*) * (n + 1));

    while (i < n)
    {
        j = i + 1;
        while (j < n)
        {
            if(my_strcmp(array[i], array[j]) > 1)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            j += 1;
        }
        i += 1;
    }
}

int main()
{
    char* star_wars[] = {"Baby Yoda", "Luke Skywalker", "Princess Leia", "Chewbacca", "Hans Solo", "Mando"};
    int n = sizeof(star_wars)/sizeof(star_wars[0]);

    char* str = "Baby Yoda";
    char empty_str[my_strlen(str)];

    my_strcpy(empty_str, star_wars[2]);
    printf("my_strcmp -> %d\n", my_strcmp(star_wars[2], star_wars[3]));
    printf("strcmp -> %d\n", strcmp(star_wars[2], star_wars[3]));
    print_array(star_wars, n);
    my_sort_array(star_wars, n);
    print_array(star_wars, n);
    return 0;
}
