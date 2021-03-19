#include <stdio.h>

int main() {
  
	int timer;
	timer = 10;

  while (timer > 0) {
	  printf("detonation in... %d secondes.\n", timer);
    --timer;
  }
  return 0;
}
