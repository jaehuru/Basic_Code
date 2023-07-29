#include <stdio.h>

void stackOverflow(int num) {
	printf("%d", num);

	return stackOverflow(num);
}

void main() {
	int num0 = 0;

	stackOverflow(num0);
}