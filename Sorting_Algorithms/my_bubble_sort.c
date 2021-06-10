#include <stdio.h>
#include <string.h>

void my_swap(int* a, int* b)
{
    int temp; 
    temp = *a; //'temp' variable 'stores' value of 'a'
    *a = *b;   //'a' takes the value of 'b'
    *b = temp; //'b' takes the value of a stored in 'temp'
}

void my_bubble_sort(int arr[], int n)
{
    int i = 0;
    int j;

    while (i < n - 1) //arr[] starts from zero
    {
        j = 0;
        while (j < n-i-1)
        {
            if (arr[j] > arr[j+1])
            {
                my_swap(&arr[j], &arr[j+1]);
            }
            j += 1;
        }
        i += 1;
    }
}

void print_array(int arr[], int size)
{
    int i = 0;
    printf("arr = {");
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

int main()
{
    int arr[] = {1350, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("sizeof(arr) = %ld\nsizeof(arr[0]) = %ld\n", sizeof(arr), sizeof(arr[0]));
    printf("n = %d\n", n);

    print_array(arr, n);
    my_bubble_sort(arr, n);
    print_array(arr, n);
    return 0;
}
