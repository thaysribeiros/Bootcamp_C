#include <stdio.h>

char main() {
	int i;
	char *str;
	char c;

  i = 34;
  str = "Luke";
  c = ',';

  printf("Hello %s%c I'm %d years old.\n", str, c, i);
  return 0;
}
