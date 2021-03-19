#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char my_christmas_tree(int tree)
{
    int row = 0;
    int column = 0;
    float p = 0;
    int k = 1;
    int i = 1;
    int j = 0;
    int size;
    int arr[100];
    arr[0] = 1;

    while (k <= tree)
    {
        row = 3 + k + row;
        size = row;
        //printf("size = %d\n", size);
        while (j <= size-1)
        {
            arr[j+1] = arr[j] + 2;
            j += 1;
            column = arr[j];
            //printf("arr[%d] = %d\n", j, arr[j]);
        }
        k += 1;
        arr[j] -= 4+p;
        if (k>=3 && k<5)
        {
            p=2;
        }
        if(k>=5 && k<8)
        {
            p=4;
        }
        if(k>=7 && k<10)
        {
            p=6;
        }
    }
    //printf("row = %d\n", row); 
    //printf("column = %d\n", column); 
    i = 0;       
    while (i < row)
    {
        j = 1;
        while (j <= column)
        {
            if (j >= (column/2) - (arr[i]/2) && j <= (column)/2 + (arr[i]/2))
            {
                printf("*");        
            }
            else if (j > (column)/2 + ((arr[i]/2)))
            {
                printf("\n");
                j = column + 1;
            }
            else
            {
                printf(" ");
            }
            j += 1;                
        }
    i += 1;
    }
    int m = 1;
    int l = 1;
    row = tree;
    while (m <= row)
    {
        while (l <= column)
        {
            if (tree%2 != 0)            {
                if (l >= (column)/2 - (tree/2) && l <= (column)/2 + (tree/2) || l == (column)/2)
                {
                    printf("|");
                }
                else if (l > (column)/2 + (tree/2))
                {
                    printf("\n");
                    l = column + 1;
                }
                else
                {
                    printf(" ");
                }
                l += 1;
            }
            else
            {
                if (l >= ((column)/2) - (tree-1)/2 && l <= ((column/2) + 0.5) + (tree/2) || l == (column/2) - 0.5)
                {
                    printf("|");
                }
                else if (l > (column/2 + 0.5) + (tree/2))
                {
                    printf("\n");
                    l = column + 1;
                }
                else
                {
                    printf(" ");
                }
                l += 1;
            }        
    }
    m += 1;
    l = 1;
    }
}

int main(int ac, char** av) {
    if (ac != 2)
    {
        return 0;
    }
    if (ac == 2)
    {
        int x = atoi(av[1]);
        my_christmas_tree(x);
        return 0;
    }
}
