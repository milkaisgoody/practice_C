#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*두 개의 수 n, m을 읽어서 n^0, n^1, n^2...를 m보다 같거나 작은 수까지 출력하는 문제*/
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