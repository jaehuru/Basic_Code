#include <stdio.h>

typedef struct _Human
{
	char name[20];
	int age;
	float height;
}Human;

void ShowHuman(Human* phuman)
{
	printf("%s\n", phuman->name);
	printf("%d\n", phuman->age);
	printf("%.2f\n", phuman->height);
}

void main()
{
	Human hong = { "ȫ�浿", 24, 174.5f };
	ShowHuman(&hong);
}