#include <stdio.h>
#include <string.h>

char* my_upcase(char* str)
{
	  int index = 0;

    while (str[index] != '\0')
    {
        if (str[index] >= 'a' && str[index] <= 'z')
        {
            str[index] = str[index] - 32;
        }
        index += 1;
    }
    return str;
}
/*
int main() {
  char *my_str = strdup("AbcE Fgef1");
  
  printf("RANDOM CASE -> %s\n", my_str);
  printf("UPCASE      -> %s\n", my_upcase(my_str));
  return 0;
}*/
