#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	if (a <= 100 && a >= 0)
	{
		switch (a / 10) {
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("F");
		}
	}
}