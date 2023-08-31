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

		while (getchar() != '\n');// 이전에 입력문이 있은 다음에 문자를 읽어야할 때 현재의 버퍼에 남은 문자들을 비우기 위해 반드시 필요하다.
		printf("Do you want to continue(y/n)?");
		scanf("%c", &answer);
	} while (answer == 'y');

	return 0;
}