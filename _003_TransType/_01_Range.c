#include "stdio.h"

void main() {
	char c = 128;
	printf("%d\n", c);

	char ch = 10;
	int i = 1000;
	float f = 1.5f;
	double d = ch * i * f + 10000;

	printf("°á°ú : %lf\n", d);
}