#include <stdio.h>

int count = 0;

void countFunc() {
	count++;
}

void callNumFunc() {
	printf("함수 호출 횟수는 %d입니다.\n", count);
}

void main() {
	for (int i = 0; i < 10; i++) {
		countFunc();
	}

	callNumFunc();
}