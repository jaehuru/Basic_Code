#include <stdio.h>
#include <stdlib.h>

void main() {
	int num;

	printf("Insert Number >> ");
	scanf_s("%d", &num);

	char** TwoDimArr = (char**)calloc(num, sizeof(char*));
	for (int i = 0; i < num; i++)
		TwoDimArr[i] = (char*)calloc(num, sizeof(char));

	

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (i + j < (num - 1) / 2 ||
				(num - 1) * 2 - ((num - 1) / 2) < i + j ||
				i - j > (num - 1) / 2 ||
				i - j < -((num - 1) / 2))
			{
				TwoDimArr[i][j] = ' ';
			}
			else
			{
				TwoDimArr[i][j] = '*';
			}
		}
	}
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < num; j++)
			{
				printf("%c", TwoDimArr[i][j]);
			}

			free(TwoDimArr[i]);
			printf("\n");
		}
		free(TwoDimArr);
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