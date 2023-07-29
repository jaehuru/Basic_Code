#include "stdio.h"

void main() {
	int val1 = 10, val2 = 20, result = 0;
	printf("관계연산자 : \n");

	result = val1 > val2;
	printf("%d\n", result);
	result = val1 < val2;
	printf("%d\n", result);
	result = val1 == val2;
	printf("%d\n", result);
	result = val1 >= val2;
	printf("%d\n", result);
	result = val1 <= val2;
	printf("%d\n", result);
}