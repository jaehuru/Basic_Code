#include <windows.h>
#include <stdio.h>

enum {
	ADD = 1, SUB, MUL, DIV, EXIT
};

void showMenu() {
	printf("----연산 선택----\n");
	printf("1. 더하기\n");
	printf("2. 빼기\n");
	printf("3. 곱하기\n");
	printf("4. 나누기\n");
	printf("5. 종료\n");
}

int getSelectMenu() {
	int num;
	printf("번호 선택 >> ");
	scanf_s("%d", &num);
	return num;
}

double Add(double dNum0, double dNum1) {
	return dNum0 + dNum1;
}

double Sub(double dNum0, double dNum1) {
	return dNum0 - dNum1;
}

double Mul(double dNum0, double dNum1) {
	return dNum0 * dNum1;
}

double Div(double dNum0, double dNum1) {
	return dNum0 / dNum1;
}

double getDoubleNum() {
	double num;
	printf("실수 입력 >> ");
	scanf_s("%lf", &num);
	return num;
}

void printResult(double result) {
	printf("\n");
	printf("결과는 %.2lf입니다.\n", result);
}

void cls() {
	system("cls");
}
void main() {
	int isRun = 1;
	while (isRun)
	{
		cls();
		showMenu();
		int sel = getSelectMenu();

		double dNum0 = 0, dNum1 = 0;
		double result = 0;
		switch (sel)
		{
		case ADD:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Add(dNum0, dNum1);
			printResult(result);
			break;
		case SUB:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Sub(dNum0, dNum1);
			printResult(result);
			break;
		case MUL:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Mul(dNum0, dNum1);
			printResult(result);
			break;
		case DIV:
			dNum0 = getDoubleNum();
			dNum1 = getDoubleNum();
			result = Div(dNum0, dNum1);
			printResult(result);
			break;
		case EXIT:
			isRun = 0;
			break;
		}
		_getch();
	}
}

/*
* 레지스터
* 캐시
* 메모리 ---- 코드: 컴파일타임에 결정되고 저장된다. 실행을 하면 기계어로 번역되어 저장된 코드를 읽어온다. read-only
*             데이터: 전역/static변수 등 프로그램이 사용하는 데이터가 저장되는 곳.
					  컴파일이 완료되면 코드는 전역/static 변수의 주소값을 가리킨다.
					  런타임 도중에 읽고 쓸 수 있다.
			  힙: 동적 할당이 이루어지는 곳. 런타임 도중에 수시로 바뀐다.
			  스택: 정적할당이 이루어지는 곳. 이 정적할당은 런타임에는 변경될 수 없다.
					어느 실행지점에서 얼마만큼 할당할지는 이미 코드를 컴파일할 때에 정해져 있다. 그 상태에서 런타임으로 진입.
* 하드
*
* 위로 갈수록 cpu에 가깝고 속도가 빠르다.
*/