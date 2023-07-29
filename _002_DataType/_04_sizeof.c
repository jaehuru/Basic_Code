#include "stdio.h"

void main() {
	int a = 10;
	float b = 3.14f;
	double c = 4.5789;
	char d = 'z';
	char str[6] = "Korea";
	long long e = 100;
	unsigned int f = -10;

	printf("%d %f %lf %c %s %llu %u\n", a, b, c, d, str, e, f);
	printf("a의 크기 : %llu %llu\n", sizeof(int), sizeof(a));
	printf("b의 크기 : %llu %llu\n", sizeof(float), sizeof(b));
	printf("c의 크기 : %llu %llu\n", sizeof(double), sizeof(c));
	printf("d의 크기 : %llu %llu\n", sizeof(char), sizeof(d));
	printf("str의 크기 : #llu", sizeof(str));
	printf("d의 크기 : %llu %llu\n", sizeof(long long), sizeof(e));
	printf("d의 크기 : %llu %llu\n", sizeof(unsigned int), sizeof(f));

}