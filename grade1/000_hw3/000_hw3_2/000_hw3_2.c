#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�ʸ� �Է¹޾� ��,��,�ʷ� ����ϴ� ���α׷�-����: ���� 4�� ���*/
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