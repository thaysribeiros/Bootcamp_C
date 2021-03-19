#include <unistd.h>
#include <stdio.h>

int my_isalpha(char letter){
	if (letter >= 97 && letter <= 122)
		return 1;
	if (letter >= 65 && letter <= 90)
		return  1;
	else
		return 0;
}

int main(){
	printf("%d\n", my_isalpha(1));
	printf("%d\n", my_isalpha('a'));
	printf("%d\n", my_isalpha(0));
}
