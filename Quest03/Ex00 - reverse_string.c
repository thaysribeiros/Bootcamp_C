#include <stdio.h>

int my_strlen(char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len += 1;
    }
    return len;
}
char* reverse_string(char* str)
{
    static char revstr[100];
	  int len = my_strlen(str);
    int index = len - 1;
    int j = 0;
    
    while (index >= 0)
    {
        revstr[j] = str[index];
        j += 1;
        index -= 1;
    }
    revstr[len] = '\0';
    return revstr;
}

int main() {

  char* str = "baby yoda";
	
	printf("Before reverse -> %s\n", str);
  printf("Reverse -> %s\n", reverse_string(str));
	return 0;
	}
