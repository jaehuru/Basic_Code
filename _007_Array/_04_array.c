#include <stdio.h>

void main() {
	int total = 0;
	double avg;
	int kor[3];
	int ARR_LEN = sizeof(kor) / sizeof(kor[0]); 
	/*
	 kor와 kor[0]의 차이를 주목하라!!
	 kor = 배열전체크기
	 kor[0] = 배열한칸크기
	 */
	for (int i = 0; i < ARR_LEN; i++)
	{
		printf("%d번째 학생 국어 점수 입력 >> ", i + 1);
		scanf_s("%d", &kor[i]);
	}

	for (int i = 0; i < ARR_LEN; i++)
	{
		total += kor[i];
	}

	avg = (double)total / ARR_LEN;

	printf("총합은 %d, 평균은 %.2lf\n", total, avg);
}