#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
	int height;
	char answer;

	do
	{
		printf("Enter your height: ");
		scanf("%d", &height);
		printf("Your ideal weight is %d\n", height - 110);

		while (getchar() != '\n');// ������ �Է¹��� ���� ������ ���ڸ� �о���� �� ������ ���ۿ� ���� ���ڵ��� ���� ���� �ݵ�� �ʿ��ϴ�.
		printf("Do you want to continue(y/n)?");
		scanf("%c", &answer);
	} while (answer == 'y');

	return 0;
}