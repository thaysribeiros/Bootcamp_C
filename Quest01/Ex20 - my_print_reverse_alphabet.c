#include <unistd.h>

void my_print_reverse_alphabet()
{
        write(1, "zyxwvutsrqponmlkjihgfedcba\n", 27);
}
/*
int main(void)
{
        my_print_reverse_alphabet();
        return 0;
}
*/
