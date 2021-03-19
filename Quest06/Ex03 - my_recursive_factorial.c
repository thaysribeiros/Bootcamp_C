#include <stdio.h>
  
int my_recursive_factorial(int nbr)
{
    long long factorial = nbr;

    if (nbr > 1){
        return factorial * my_recursive_factorial(nbr - 1);
    }
    else {
        return 1;
    }
}
/*
int main(int ac, char *av){
    
    int nbr = 5;
    long long factorial;
    factorial = my_recursive_factorial(nbr);
    printf("%lld\n", factorial);  
    return 0;
}*/
