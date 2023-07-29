#include <stdio.h>

int num = 100; //전역변수

int getNum() {
	int num = 10;
	return num;
}

int getGNum() {
	return num;
}

void main() {
	int ret = getNum();
	printf("%d\n", ret);
	ret = getGNum();
	printf("%d\n", ret);
	printf("%d\n", num);
}