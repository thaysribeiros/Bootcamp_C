#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int size)
{
    int i = 0;
    printf("arr[] = {");
    while (i < size)
    {
        printf("%d", arr[i]);
        if (i < size - 1)
        {
            printf(", ");
        }
        i += 1;
    }
    printf("}\n");
}

int* my_range(int min, int max)
{
    int size = max - min;
    int* result = malloc(sizeof(int) * size);
    int i = 0;

    while (min < max)
    {
        result[i] = min;
        i += 1;
        min += 1;
    }
    return result;
}

/*
int main() {
    
    int min = 4;
    int max = 8;
    int* array = my_range(min, max);
    print_array(array, max-min);
    return 0;
}*/
