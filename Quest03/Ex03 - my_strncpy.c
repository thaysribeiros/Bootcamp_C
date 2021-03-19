#include <stdio.h>

char* my_strncpy(char* dest, char* src, int n)
{
    int i = 0;
  
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i += 1;
    }
    if (i < n && src[i] == '\0')
    {
        while (dest[i] != '\0')
        {
            dest[i] = '\0';
            i += 1;
        }
    }
    return (dest);
}
/*
int main() {
  char* src = "abc";
  char dst[20];
  int n = 2;
  printf("my_strncpy -> %s\n", my_strncpy(dst, src, n));
  return 0;
}*/
