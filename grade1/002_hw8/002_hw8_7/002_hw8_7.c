#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0)
			printf("%-2d ", i);
	}
}