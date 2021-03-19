#include <unistd.h>
#include <stdio.h>

int my_isspace(char space)
{
	if (space == 32 || space == ' ' || space == '\f' || space == '\n' ||space == '\r' || space == '\t' || space == '\v')
		return 1;
	else
		return 0;
}
/*
int main(){
	printf("%d\n", my_isspace('A'));
	printf("%d\n", my_isspace('a'));
	printf("%d\n", my_isspace(' '));
}
*/
