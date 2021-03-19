#include <stdio.h>
#include <unistd.h>

int my_strlen(char* str)
{
	int len;

	len = 0;
	while (str[len] != 0)
	{
		len += 1;
	}
	return (len);
}
/*
int main(){
	printf("%d\n", my_strlen("abc"));
	printf("%d\n", my_strlen("RaInB0w d4Sh!"));
	printf("%d\n", my_strlen("ThE C4k3 Is a L|3"));
}*/
