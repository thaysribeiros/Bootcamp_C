#include <stdlib.h>
#include <stdio.h>

char my_square(int row, int column){

    int i = 0;
    int j = 0;
        
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++)
        {
            if ((i == 0 || i == row - 1) && (j == 0 || j == column - 1)){
                printf("o");
            }
            else if ((i > 0) && ((j == 0) || j == column - 1)) {
                printf("|");
            }
            else if ((i == 0 || i == row - 1) && (j >= 1 && j <= column - 2 )) {
                printf("-");
            }
            else {
                printf(" ");
            }      
        
        }
    printf("\n");
    }    
}

int main(int ac, char **av)
{
    //ac = 3;
    //av[1] = "3";
    //av[2] = "2";
    if (ac != 3) {
        return 0;
    }
    if (ac = 3){
        int x = atoi(av[1]);
        int y = atoi(av[2]);
        my_square(y, x);
        }
}
