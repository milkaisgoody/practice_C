#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*� ���� 2������ �Ųٷ� ����ϴ� ���α׷�*/
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