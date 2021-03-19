#include <stdio.h>
#include <stdlib.h>

int* my_range(int min, int max)
{
    int n = max - min; 
    int *ptr = (int*)malloc(n*sizeof(int));
    int index;
    //int array[n];           
    //array[0] = min + 0;
    //array[1] = min + 1;
    //...
    //array[index] = min + index;
    //array[n] =  min + n;
   
    // get the elements of the array 
    for (int index = 0; index < n; index++) {
        ptr[index] = min + index;
    }
    // return the elements of the array 
    for (index = 0; index < n; index++) { 
        return ptr; 
    } 
}
/*
int main() {
    
    int min = 4;
    int max = 8;
    my_range(min, max);
    return 0;
}*/
