#include <stdio.h>

/* �������� 3��° ���
* �Լ��� ������ ������ �����ϰ�,
* �� �����͸� �Լ�ó�� ȣ���ϸ� �����Ͱ� ����Ű�� �Լ��� ȣ��ȴ�.
*
* ���α׷� ���ΰ� �ƴ϶� �ܺο��� �����ϴ� �Լ��� ���� ������ ��ȭ��ų �� �ִ�.
*  - ���α׷��� ������ ����
*  - �̺�Ʈ �ڵ鷯 �Լ� ����
*
* �� �Լ� �����Ͱ� C#���� ��������Ʈ�� �����Ѵ�.
* �Լ� �����Ϳ� ��������Ʈ�� ����� �����ϴ�.
*/

void KorPresentation()
{
	printf("���� �Է� >> ");
}

void EngPresentation()
{
	printf("Input Integer >> ");
}

/*  void (*fptr)() => ������ ����
* �� ������ ������ �������� void, �Ű������� ����(void)�� �Լ��� ����ų �� �ִ�.
* ���� int (*fptr)(int, int) �� ���� ������ ������
* �������� int, �Ű������� int�� 2���� �Լ��� ����ų �� �ִ�.
*
* �Լ��� �޸��� Code Segment������ �ε��ȴ�.
* �� �Լ��� ������ġ�� �����ϰ� �ȴ�.
*/

int GetInputValue(void (*fptr)())
{
	int num = 0;
	fptr();
	scanf_s("%d", &num);
	return num;
}

void main()
{
	int val = GetInputValue(KorPresentation);
	printf("�Է� ���� %d\n", val);
	val = GetInputValue(EngPresentation);
	printf("Input Value is %d\n", val);
}