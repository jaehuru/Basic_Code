// �ʸ� �Է��ϰ� ��, ��, �ʷ� ���� ����� ���Ϲ޾ƶ�
/*
*   C���� 1���� ���ϰ����� ����Ѵ�.(���̽��� ���� �� ����)
*
	��� 1) �Ű������� �����ͺ����� ����ϸ� �����ϴ�.
	��� 2) ���� �� ������ ����ü ������ ��Ƽ� ����ü ���� 1���� ����
*/

#include <stdio.h>
// C���� �Ʒ�ó�� �ϴ� �� �Ұ����ϴ�.
// ���� ������ ���� �� �� ������... ???????
int GetHourMinuteSecond(int totalSec)
{
	int hour = 10, minute = 50, sec = 90;

	return hour, minute, sec;
}

void main()
{
	int hour = 0, minute = 0, sec = 0;
	hour, minute, sec = GetHourMinuteSecond(10000);
	printf("%d %d %d\n", hour, minute, sec);
}