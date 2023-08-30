#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	int i;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 2; i < num; i++) 
		if (num % i == 0) 
			break;

	if (i == num) 
		printf("%d는 소수이다.\n", num);
	else
		printf("%d는 소수가 아니다.\n", num);
}