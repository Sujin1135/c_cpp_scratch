#include <stdio.h>

void dice(int input) {
	printf("망고가 던진 주사위: %d\n", input);
}

int main(void) {
	dice(5);
	dice(3);
	dice(1);
}