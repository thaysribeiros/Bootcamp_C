#include <stdio.h>

int my_fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    else 
    {
        return (my_fibonacci(n - 1) + my_fibonacci(n - 2));
    }

}
/*
int main(int ac, char** av)
{
    long n = 50;
    long Fibonacci;
    Fibonacci = my_fibonacci(n);
    printf ("The Fibonacci sequence number is %ld\n", Fibonacci);
    return 0;    
}*/
