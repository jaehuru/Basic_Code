#include <stdio.h>

// �ʸ� �Է��ϰ� ��, ��, �ʷ� ���� ����� ���Ϲ޾ƶ�
/*
*   C���� 1���� ���ϰ����� ����Ѵ�.(���̽��� ���� �� ����)
*
	�������� 2��° ���) �Ű������� �����ͺ����� ����ؼ� ����� ���Ϲ޴´�.
	   - �����ͺ����� �Ű������� �ؼ� ������ �ּҸ� �����ϸ�
		 ���������� ��踦 �Ѿ ���� ���� �ּҸ� ���� ������ �� �ִ�.
*/
void GetHourMinuteSecond(int totalSec, int* pHour, int* pMin, int* pSec)
{
	int hour = 0, minute = 0, sec = 0;

	sec = totalSec % 60;
	minute = totalSec / 60;
	hour = minute / 60;
	minute = minute % 60;

	*pHour = hour;
	*pMin = minute;
	*pSec = sec;
}

void main()
{
	int hour = 0, minute = 0, sec = 0;
	GetHourMinuteSecond(3725, &hour, &minute, &sec);
	printf("%02d:%02d:%02d\n", hour, minute, sec);
	GetHourMinuteSecond(4000, &hour, &minute, &sec);
	printf("%02d:%02d:%02d\n", hour, minute, sec);
}