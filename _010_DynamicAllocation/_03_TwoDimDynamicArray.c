#include <stdio.h>

void main() {
	int num;

	printf("Insert Number >> ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) { // y¡Æ¨£
		for (int j = 0; j < num; j++) { // x¡Æ¨£
			if (i + j < (num - 1) / 2 ||
				(num - 1) * 2 - ((num - 1) / 2) < i + j ||
				i - j > (num - 1) / 2 ||
				i - j < -((num - 1) / 2))
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}

/*

00 10 20 30 40 50 60
01 11 21 31 41 51 61
02 12 22 32 42 52 62
03 13 23 33 43 53 63
04 14 24 34 44 54 64
05 15 25 35 45 55 65
06 16 26 36 46 56 66

*/