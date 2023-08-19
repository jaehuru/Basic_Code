#include <stdio.h>

typedef struct _Human
{
	char name[20];
	int age;
	float height;
}Human;

void ShowHuman(Human human)
{
	printf("%s\n", human.name);
	printf("%d\n", human.age);
	printf("%.2f\n", human.height);
	
}

void main()
{
	Human hong = { "ȫ�浿", 24, 174.5f };
	ShowHuman(hong);
}