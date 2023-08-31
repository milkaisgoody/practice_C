#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*어떤 수의 2진수를 거꾸로 출력하는 프로그램*/
int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (num > 0) {
		printf("%d", num % 2);
		num /= 2;
	}
}