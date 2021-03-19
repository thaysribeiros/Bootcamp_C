#include <stdio.h>

char* my_strcpy(char* dst, char* src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}
/*
int main() {
  char dst[100] = {0};
  char *src     = "Hello";
  printf("my_strcpy -> %s\n", my_strcpy(dst, src));
  return 0;*/
