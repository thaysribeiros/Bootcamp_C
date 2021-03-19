#include <stdio.h>
#include <stdlib.h>
//my_cat//
int main(int ac, char** av)
{
    FILE *ptr; 
    char c;
    int i = 1;
    while (i < ac)
    {
        ptr = fopen(av[i], "r");
        c = fgetc(ptr);
        while (c != EOF)
        {
            putc(c, stdout);
            c = fgetc(ptr);
        }
        fclose(ptr);
        i += 1;
    }
    return 0;
}
