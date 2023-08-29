#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*초를 입력받아 시,분,초로 출력하는 프로그램-조건: 변수 4개 사용*/
int main(void)
{
	int totalSec;
	int hour;
	int min;
	int sec;

	printf("Enter the total seconds: ");
	scanf("%d", &totalSec);

	hour = totalSec / 3600;
	min = totalSec % 3600 / 60;
	sec = totalSec % 3600 % 60;

	printf("%d seconds\n", totalSec);
	printf("%dh %dm %ds\n", hour, min, sec);
}