#include <unistd.h>
#include <stdio.h>

int my_iterative_pow(int nbr, int power)
{
    long long pow = 1;

    if (power < 0) {
        return 0;
    }
    while (power > 0){
        pow *= nbr; 
        --power;   
    }
    //printf("%lld\n", pow);  
    return pow;
}
/*
int main(int ac, char** av) {
    int nbr = 6;
    int power = -2;
    my_iterative_pow(nbr, power);
}*/
