#include <stdio.h>
#include <unistd.h>

int my_atoi(char* str)
{
    long nbr = 0;
    int sign = 1;

    if (*str == '\0')
    {
        return 0;
    }
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (*str && (*str >= '0' || *str <= '9')) 
    {
        nbr = nbr * 10 + (*str - '0');
        str++;
    }
    return nbr*sign;
    //printf("%ld", nbr*sign);
}
/*
int main(int ac, char** av){
    char* str = "";
    my_atoi(str);
    return 0;
}*/
