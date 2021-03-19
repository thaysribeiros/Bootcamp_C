#include <stdio.h>

int my_strcmp(char* str1, char* str2)
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
    {
        i += 1;
    }
    return (str1[i] - str2[i]);
}
/*
int main() {
  char *s1 = "abc";
  char *s2 = "bd";
  printf("my_strcmp -> %d\n", my_strcmp(s1, s2));
  return 0;
}*/
