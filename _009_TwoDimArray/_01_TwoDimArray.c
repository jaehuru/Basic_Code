#include <stdio.h>

/*2���� �迭
; 1���� �迭�� ���� ���� ��
�������δ� ���簢���� ����

0  1  2  3  4
5  6  7  8  9
10 11 12 13 14
*/

void main()
{
	// �⺻ 5�� int�迭�� 3���� ���� ��
	int kor[3][5];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			kor[i][j] = i * 5 + j;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", kor[i][j]);
		}
		printf("\n");
	}
}