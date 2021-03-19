#include <unistd.h>
#include <stdio.h>

int my_isdigit(char digit){
  if (digit >= 48 && digit <= 57)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(){
	printf("%d\n", my_isdigit(0));
	printf("%d\n", my_isdigit('a'));
	printf("%d\n", my_isdigit(' '));
	printf("%d\n", my_isdigit(9));
	printf("%d\n", my_isdigit(10));
}
