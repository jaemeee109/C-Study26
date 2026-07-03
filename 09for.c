#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//단순 for문


// Hellow World 5번 출력하기
/*int main(void)
{
	int i;
	for (i = 0; i < 5; i++) // i는 0부터 4까지 증가
		printf("Hello World!\n");
	return 0;
}*/
// 실행결과:
// Hello World!
// Hello World!
// Hello World!
// Hello World!
// Hello World!

// 반복문을 이용한 네모 그리기
/*int main(void)
{
	int i;
	printf("**********");
	for (i = 0;i < 5; i++)
		printf("*　　　　*");
	printf("**********");
	return 0;
}*/
// 실행결과 :
// **********
// *　　　　*
// *　　　　*
// *　　　　*
// *　　　　*
// *　　　　*
// **********

// 반복을 이용한 팩토리얼 구하기
/*int main(void)
{
	long fact = 1;
	int i, n;
	printf("정수를 입력하시요:");
	scanf("%d", &n);
	for (i = 1;i <= n; i++)
		fact = fact * i;
	printf("%d!은 %d입니다.\n", n, fact);
	return 0;
}*/
// 실행결과:
// 정수를 입력하시요:95
// 95!은 0입니다.

// 반복을 이용한 세제곱값 구하기
/*int main(void)
{
		int i, n;
		printf("정수를 입력하시요:");
		scanf_s("%d", &n);
		printf("====================\n");
		printf("   i       i의 세제곱\n");
		printf("====================\n");
		for (i = 1;i <= n; i++)
				printf("%5d     %5d\n", i, i * i * i);
		return 0;
}*/
// 실행결과 :
/*정수를 입력하시요 : 25
====================
i       i의 세제곱
====================
1         1
2         8
3        27
4        64
5       125
6       216
7       343
8       512
9       729
10      1000
11      1331
12      1728
13      2197
14      2744
15      3375
16      4096
17      4913
18      5832
19      6859
20      8000
21      9261
22     10648
23     12167
24     13824
25     15625*/

// 증감식을 --로 했을 때 반복문
/*int main(void)
{
	int i;
	for (i = 5; i > 0; i--) { printf("%d : for 문을 공부중입니다. \n", i); } return 0;
}*/
// 실행결과:
/*5 : for 문을 공부중입니다.
4 : for 문을 공부중입니다.
3 : for 문을 공부중입니다.
2 : for 문을 공부중입니다.
1 : for 문을 공부중입니다.*/

// 500~1000까지의 합

/*int main(void)
{
	int hap = 0; int i;
	for (i = 501; i <= 1000; i += 2) {
		hap = hap + i;
	}
	printf(" 500에서 1000까지의 홀수의 합: %d \n", hap); return 0;
}*/
// 실행결과 :
// 500에서 1000까지의 홀수의 합 : 187500