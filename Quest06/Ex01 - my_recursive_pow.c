
#include <stdio.h>

int my_recursive_pow(int nbr, int power)
{    
    if (power > 0){
        return nbr * my_recursive_pow(nbr, power - 1);
    }
    else {
        return 1;
    }
}
/*
int main(int ac, char** av)
{
    int nbr = 2;
    int power = 8;
    long long pow;
    pow = my_recursive_pow(nbr, power);
    printf("%lld\n", pow);  
    return 0;
}*/
