#include <unistd.h>
#include <stdio.h>

int my_islower(char letter)
{
        if (letter >= 97 && letter <= 122)
                return 1;
        if (letter >= 65 && letter <= 90)
                return  0;
        else
                return 0;
}

int main(){
      printf("%d\n", my_islower('A'));
      printf("%d\n", my_islower('a'));
      printf("%d\n", my_islower(0));
}
