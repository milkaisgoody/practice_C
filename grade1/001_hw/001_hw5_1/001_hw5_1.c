#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char input;

	printf("Enter an upper letter(A-Y): ");
	scanf("%c", &input);
	printf("Character given is %c(%d)\n", input, input);
	printf("The next character is %c(%d)\n", input + 1, input + 1);
	printf("The lower case Letter is %c(%d)\n", input + 32, input + 32); //대문자와 소문자의 아스키 코드 값 차이를 기억할 것
}