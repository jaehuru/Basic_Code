#include <stdio.h>

void main() {
	int total = 0;
	double avg;
	int kor[3];
	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 학생의 국어점수 입력 >> ", i + 1);
		scanf_s("%d", &kor[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		total += kor[i];
	}

	avg = (double)total / 3;
	printf("총합은 %d, 평균은 %.2lf\n", total, avg);
}
