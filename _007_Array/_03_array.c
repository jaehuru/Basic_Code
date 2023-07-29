#include <stdio.h>

#define KOR_NUM 5

void main() {
	int total = 0;
	double avg;
	int kor[KOR_NUM];
	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d번째 학생 국어 점수 입력 >> ", i + 1);
		scanf_s("%d", &kor[i]);
	}

	for (int i = 0; i < KOR_NUM; i++)
	{
		total += kor[i];
	}

	avg = (double)total / KOR_NUM;
	printf("총합은 %d, 평균은 %.2lf\n", total, avg);
}