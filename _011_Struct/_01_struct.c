#include <stdio.h>
#include <string.h>

/*ȫ�浿�� �̸�, ����, Ű�� �Է¹ް� ����ϼ���*/

void main()
{
	char name[20];
	int age;
	float height;

	printf("�̸� >> ");
	fgets(name, sizeof(name), stdin);  // scanf_s�� "ȫ �浿"�� �Է��ϸ� 'ȫ'�� �Էµȴ�.
	/* fgets�� \n������ name�� ���� �����Ѵ�.
	 �׷��� ���� \n���� '\0'���� ��ȯ�Ѵ�.
	*/
	name[strlen(name) - 1] = '\0';
	printf("���� >> ");
	scanf_s("%d", &age);
	printf("Ű >> ");
	scanf_s("%f", &height);

	printf("************\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("Ű : %.2f\n", height);
	printf("************\n");
}