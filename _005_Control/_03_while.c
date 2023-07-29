#include "stdio.h"

void main() {
	/*int i = 1;
	while (i <= 10)
	{
		printf("%d\n", i++); //(i++: i = i + 1)
	}*/

	int i = 1;

	while (1)
	{
		printf("%d\n", i++);
		if (i > 10)
			break;
	}
}