#include <unistd.h>
#include <stdio.h>

int my_isupper(char letter)
{
        if (letter >= 97 && letter <= 122)
                return 0;
        if (letter >= 65 && letter <= 90)
                return  1;
        else
                return 0;
}
//int main(){
//      printf("%d\n", my_isupper('A'));
//      printf("%d\n", my_isupper('a'));
//      printf("%d\n", my_isupper(0));
//}
