#include <stdio.h>

void main() {
	int kor[5] = { 99, 89, 100, 78, 67 };
	char* name[] = { "홍길동", "임꺽정", "장길산", "차돌바위", "일지매" };
	int ARR_LEN = sizeof(kor) / sizeof(kor[0]);

	for (int i = 0; i < ARR_LEN; i++)
		printf("%s : %d\n", name[i], kor[i]);
}