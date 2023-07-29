#include <stdio.h>

//int count = 0;

int countFunc() {
	int count = 0;
	count++;
	return count;
}

void callNumFunc(int param) {
	printf("함수 호출 횟수는 %d입니다.\n", param);
}

void main() {
	int num = 0;
	for (int i = 0; i < 10; i++) {
		num = countFunc();
	}

	callNumFunc(num);
}