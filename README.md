# practice_C
Repository for C  study : c언어 복습하고 공부하는 공간


## 자꾸 잊어버리는 C언어 문법

### <입출력 문법>
||입력시(scanf문)|출력시(printf문)|
|--|--|--|
|정수형 int|%d|%d|
|문자형 char|%c|%c|
|실수형 float|%f|%f|
|실수형 double|%lf|%f|
>실수형 scanf문 작성할 때, %lf에서 소문자 L임에 주의!

### <소수점으로 나타내기>
ex) 소수점 2자리까지 나타내기 -> "%.2f"

### <아스키 코드표>
![아스키 코](https://search.pstatic.net/common/?src=http%3A%2F%2Fblogfiles.naver.net%2FMjAyMjA4MzBfMTk5%2FMDAxNjYxODMzNjUyNzYw.Ch6CCXmFR88UTMiMOmqcRVm1OmUsCS3cVJ-VqE8GvWcg.OIBZewhvEy0xBJmMp8tiwJUNI75jDYX5VAGMugB4tcUg.PNG.es7her%2F%25BE%25C6%25BD%25BA%25C5%25B0_%25C4%25DA%25B5%25E5%25C7%25A5_2-001.png&type=sc960_832)

### <진수>
|코드|진수|
|--|--|
|%o|8진수로 출력|
|%d|10진수로 출력|
|%x|16진수로 출력|

### <큰 따옴표와 %출력하기>
-실행결과
>I said "Hello" and left.
>
>I was 100% confident with my behavior.

-코드
```C
printf("I said \"Hello\" and left."); //큰따옴표 출력하는 법
printf("\n");
printf("I was 100%% confident with my behavior."); // %출력하는 법
``` 

### <switch문>
```C
scanf("%d", &num); //input을 읽는다;

switch(num)
{
  case 1:
        printf("One\n"); //값이 1이면 One이 출력됨
        break; //switch문 탈출
  case 2:
        printf("Two\n"); //값이 2이면 One이 출력됨
        break;
  case 3:
        printf("Three\n"); //값이 3이면 One이 출력됨
        break;
  default:
        printf("다른수\n"); //위중 아무값에도 포함되지 않는 경우 이 문장이 출력됨, 선택적으로 넣는 것임
        break; //제일 끝 break는 없어도 됨
}
```

### <정렬>

오른쪽 정렬: %+숫자d 

왼쪽 정렬: %-숫자d

### <난수 발생>
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
	srand(time(NULL));//매번 다른 방법으로 난수를 생성하도록 해주는 코드

	printf("%d\n", rand() % 100 + 1); // rand() % 100 + 1 -> 1부터 100까지의 난수 출력
	printf("%d\n", rand() % 100); // rand() % 100 -> 0부터 99까지의 수
	printf("%d\n", rand() % 101); //rand() % 101 -> 0부터 100까지의 수
}
```

### <버퍼 비움>
버퍼비움 예제 [here](https://github.com/milkaisgoody/practice_C/blob/main/grade1/003_hw9/003_lab9_1/003_lab9_1.c)

### <이진수 거꾸로 출력>
이진수 거꾸로 출력 예제 [here](https://github.com/milkaisgoody/practice_C/blob/main/grade1/003_hw9/003_hw7_5/003_hw7_5.c)
