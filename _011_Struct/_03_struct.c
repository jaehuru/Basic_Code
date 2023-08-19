#include <stdio.h>

/* C���� ����ü ����� struct Human human; ó�� structŰ���带 �ٿ��� �Ѵ�.
* �ٸ� ���α׷��ӵ��� ����ü�� ��� ����ϴٺ��� struct�� �����ؼ� ǥ���ϱ⸦
* ���ߴ�.
* �׷��� C++������ struct�� ������ �����ϴ�.
*
* C������ typedef�� ����ϸ� struct�� ������ �����ϴ�.
*/

/* ���� ����ü ����
struct Human
{
	char name[20];
	int age;
	float height;
};
*/

/*
* // 1��° ���
struct _Human
{
	char name[20];
	int age;
	float height;
};
typedef struct _Human Human;
*/


// 2��° ���
typedef struct _Human
{
	char name[20];
	int age;
	float height;
}Human;



void main()
{
	//struct Human human;
	Human human;

	printf("�̸� >> ");
	fgets(human.name, sizeof(human.name), stdin);
	human.name[strlen(human.name) - 1] = '\0';
	printf("���� >> ");
	scanf_s("%d", &human.age);
	printf("Ű >> ");
	scanf_s("%f", &human.height);

	printf("************\n");
	printf("�̸� : %s\n", human.name);
	printf("���� : %d\n", human.age);
	printf("Ű : %.2f\n", human.height);
	printf("************\n");
}