#include <stdio.h>

int my_iterative_factorial(int nbr)
{
    long long factorial = nbr;

    while (nbr > 1){
        factorial *= nbr - 1;
        --nbr;  
    }
    return factorial;
    //printf("%lld\n", factorial);  
}
/*
int main(int ac, char** av){
    int nbr = 4;
    my_iterative_factorial(nbr);
}*/
