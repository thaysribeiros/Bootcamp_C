#include <stdio.h>
#include <unistd.h>

int my_putchar(char c) 
{
  return write(1, &c, 1);
}
void my_putstr(char* str)
{
  int i = 0;
	while (str[i] != '\0')
  {
	    my_putchar(str[i]);
      i += 1;
	}
}

int main(){
	my_putstr("I love Baby Yoda 4   ever\n");
	my_putstr("");
}
