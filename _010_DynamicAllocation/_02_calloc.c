#include <stdio.h>
#include <stdlib.h>

#define KOR_NUM		3

void main()
{
	/*
	* �����Ҵ��ϰ� ���� �Ҵ��� ��� �޸𸮸� 0���� �ʱ�ȭ�Ѵ�.
	* �Ʒ� 2���� �ڵ�� calloc�� 1�ٰ� ������ �ڵ��̴�.
	int* pKor = (int*)malloc(KOR_NUM * sizeof(int));
	memset(pKor, 0, sizeof(int)*KOR_NUM);
	*/
	int* pKor = (int*)calloc(KOR_NUM, sizeof(int));
	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d��° ���� ���� �Է� >> ", i + 1);
		scanf_s("%d", &pKor[i]);   // (pKor + i)
	}
	printf("\n");

	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d��° ���� ���� : %d\n", i + 1, pKor[i]);
	}

	free(pKor);
}