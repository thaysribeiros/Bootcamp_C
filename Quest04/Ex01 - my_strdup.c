#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* str) {
    int len = 0;

    while (str[len] != '\0') {
        len += 1;
    }
    return (len);
}

char* my_strdup(char* str)
{
    char *result = malloc(sizeof(char) * my_strlen(str));
    int index = 0;

    while (str[index] != '\0') {
        result[index] = str[index];
        index += 1;
    }
    result[index] = '\0';
    return result;
}
/*
int main(int ac, char **av) {
    char *str = my_strdup("hello");
    printf("%s", str);
}*/
