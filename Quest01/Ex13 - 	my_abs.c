#include <stdio.h>

int my_abs(int nbr) {
	if (nbr < 0){
		return (nbr * -1);
	}
	else{
		return nbr;
	}
}

int main() {
	printf("%d\n", my_abs(-5656));
	printf("%d\n", my_abs(12236));
	printf("%d\n", my_abs(-0));
}
