#include "stdio.h"

void main() {
	char ch;

	printf("scan operator (+, -, *, /, %) >> ");
	scanf_s("%c", &ch);

	switch (ch)
	{
	case '+':
		printf("+ operator\n");
		break;
	case '-':
		printf("- operator\n");
		break;
	case '*':
		printf("* operator\n");
		break;
	case '/':
		printf("/ operator\n");
		break;
	case '%':
		printf("% operator\n");
		break;
	default:
		printf("nat an operator\n");
		break;
	}
}