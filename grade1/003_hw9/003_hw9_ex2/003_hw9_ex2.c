#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�� ���� �� n, m�� �о n^0, n^1, n^2...�� m���� ���ų� ���� ������ ����ϴ� ����*/
int main(void)
{
	int n, m;
	int mul;
	int count;

	printf("Enter two numbers: ");
	scanf("%d %d", &n, &m);

	mul = 1;
	count = 0;

	while (mul <= m) {
		printf("%d ", mul);
		mul *= n;
		count++;
	}
	printf("\n%d\n", count);
}