#include <unistd.h>

void my_print_alphabet()
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}

/*int main(void)
{
	my_print_alphabet();
	return 0;
}
*/
