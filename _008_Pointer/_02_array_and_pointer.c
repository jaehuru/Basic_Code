#include <stdio.h>

/* int* pnum;��
* int num�� �ּҳ�
* int arr[]�� ���� �迭�� �����ּҸ� �����Ѵ�.
*
* �迭�� �̸��� �迭��ü�� �����ּҸ� �ǹ��Ѵ�.
*/

void main()
{
	int kor[] = { 99, 100, 88, 78, 89 };
	int* pArr = kor;

	// %p�� 16������ ������ ������ ���� ����� �� ���
	printf("%p\n", kor);
	printf("%p\n", &kor[0]);

	// pArr�� �迭�� ������ġ�� ����Ų��.
	for (int i = 0; i < sizeof(kor) / sizeof(int); i++)
		printf("%d, ", pArr[i]);	// kor[i]��� �����ͷ� ������ �� �ִ�.
	printf("\n");

	/*������ ������ ���ϴ� i�� �ּҸ� i��ŭ �����ϴ� �ǹ̰� �ƴϰ�
	sizeof(int) * i ��ŭ �ּҸ� �̵��϶�� �ǹ��̴�.
	�� i�� �ε����� �ǹ��̴�. */
	for (int i = 0; i < sizeof(kor) / sizeof(int); i++)
		printf("%d, ", *(pArr + i));
	printf("\n");
}