#include <stdio.h>
#include <string.h>

#define HUMAN_NUM 3

typedef struct _Human
{
	char name[20];
	int age;
	float height;
}Human;

void main()
{
	Human human;
	Human* pHuman = &human;

	/* ����ü ������ ������ �����ϴ� ����� �Ʒ� 2���� ��� ����������
	* �Ϲ������� -> �� ����ؼ� ��������� �����Ѵ�.
	(*pHuman).name;
	pHuman->name;
	*/

	printf("�̸� >> ");
	fgets(pHuman->name, sizeof(pHuman->name), stdin);
	pHuman->name[strlen(pHuman->name) - 1] = '\0';
	printf("���� >> ");
	scanf_s("%d", &pHuman->age);
	printf("Ű >> ");
	scanf_s("%f", &pHuman->height);

	printf("************\n");
	printf("�̸� : %s\n", pHuman->name);
	printf("���� : %d\n", pHuman->age);
	printf("Ű : %.2f\n", pHuman->height);
	printf("************\n");
}