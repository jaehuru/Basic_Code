#include <stdio.h>

/*������ ����
������ �迭�� �ּҸ� �����ϴ� ����
int*�� int�� �ּ�
char*�� char�� �ּ�
double*�� double�� �ּ�
*/

void main()
{
	int num = 100;
	//������ ���� = num�� �ּҰ�
	int* pnum = &num;

	printf("%llu, %p\n", pnum, pnum);
	printf("%llu, %p\n", &num, &num);

	printf("%d, %d\n", num, *pnum);

	num = 999;
	printf("%d, %d\n", num, *pnum);

	*pnum = 1200;
	printf("%d, %d\n", num, *pnum);
}