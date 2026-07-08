#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// while문
/*int main(void)
{
	int i = 0; 
	while (i < 5)
	{
		printf("Hello World\n");
		i++;
	}
	return 0;
}*/
// 실행결과
/*Hello World
Hello World
Hello World
Hello World
Hello World*/

/*int main(void)
{
	int i;
	for (i = 0; i < 5; i++) // i는 0부터 4까지 증가
		printf("Hello World!\n");
	return 0;
}*/
// 실행결과
/*Hello World!
Hello World!
Hello World!
Hello World!
Hello World!*/

/*int main(void)
{
	int i = 1;
	while (i != 0)
	{
		printf("0을 입력하면 반복이 중단됨\n"); printf("숫자를 입력하세요>");
		scanf_s("%d", &i);
	}
	return 0;
}*/
// 실행결과
/*0을 입력하면 반복이 중단됨
숫자를 입력하세요 > 2
0을 입력하면 반복이 중단됨
숫자를 입력하세요 > 6
0을 입력하면 반복이 중단됨
숫자를 입력하세요 > 0*/

/*int main(void)
{
	int i = 0; while (i < 10) { printf("i=%d ", i); i++; } return 0;
}*/
// 실행결과
// i=0 i=1 i=2 i=3 i=4 i=5 i=6 i=7 i=8 i=9

/*int main(void)
{
	int i = 5;
	long factorial = 1;
	while (i >= 1)
	{
		factorial *= i;
		i--; //i 감소
	}
	printf("%d \n", factorial); return 0;
}*/
// 실행결과 : 120

/*int main(void)
{
	int dan;
	int i = 1;
	printf("구구단 중에서 출력하고 싶은 단을 입력하시오: ");
	scanf_s("%d", &dan);
	while (i <= 9)
	{
		printf("%d*%d = %d \n", dan, i, dan * i);
		i++;
	}
	return 0;
}*/
// 실행결과
/*구구단 중에서 출력하고 싶은 단을 입력하시오 : 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45*/

// 1부터 n까지 합 계산 
/*int main(void)
{
	int i, n, sum;// 변수 선언

	printf("정수를 입력하시오:"); // 입력 안내 메시지 출력
	scanf_s("%d", &n); // 정수값 입력

	i = 1; // 변수 초기화
	sum = 0;
	while (i <= n)
	{
		sum += i; // sum = sum + i;와 같다.
		i++; // i = i + 1과 같다.
	}

	printf("1부터 %d까지의 합은 %d입니다\n", n, sum);*/

// do~while문

/*int main()
{
	int a = 100; 
	while (a == 200) 
	{ printf("while문 내부에 들어 왔습니다.\n"); 
	} do { 
		printf("do ~ while문 내부에 들어 왔습니다.\n"); 
	} while (a == 200);
}*/
// 실행결과 :do ~ while문 내부에 들어 왔습니다.
/*int main(void)
{
	int i = 0;
	do
	{
		printf("1---새로만들기\n");
		printf("2---파일열기\n");
		printf("3---파일닫기\n");
		printf("하나를 선택하시요.\n");
		scanf_s("%d", &i);
	} while (i < 1 || i > 3);

	printf("선택된 메뉴=%d\n", i);
}*/
// 실행결과 :
/*1-- - 새로만들기
2-- - 파일열기
3-- - 파일닫기
하나를 선택하시요.
3
선택된 메뉴 = 3*/

/*int main(void)
{
	int answer = 59; // 정답
	int guess; int tries = 0;
	do {
		printf("정답을 추측하여 보시오: "); scanf_s("%d", &guess); tries++;
		if (guess > answer) // 사용자가 입력한 정수가 정답보다 높으면
			printf("제시한 정수가 높습니다."); if (guess < answer) // 사용자가 입력한 정수가 정답보다 낮으면
			printf("제시한 정수가 낮습니다.");
	} while (guess != answer); printf("축하합니다. 시도횟수=%d", tries); return 0;
}*/
// 실행결과
/*정답을 추측하여 보시오 : 2
제시한 정수가 낮습니다.정답을 추측하여 보시오 : 1
제시한 정수가 낮습니다.정답을 추측하여 보시오 : 8
제시한 정수가 낮습니다.정답을 추측하여 보시오 : 11
제시한 정수가 낮습니다.정답을 추측하여 보시오 : 55
제시한 정수가 낮습니다.정답을 추측하여 보시오 : 99
제시한 정수가 높습니다.정답을 추측하여 보시오 : 82
제시한 정수가 높습니다.정답을 추측하여 보시오 : 79
제시한 정수가 높습니다.정답을 추측하여 보시오 : 72
제시한 정수가 높습니다.정답을 추측하여 보시오 : 68
제시한 정수가 높습니다.정답을 추측하여 보시오 : 59
축하합니다.시도횟수 = 11*/


// 0을 입력할 때까지 숫자를 더함
int main(void)
{
	int number, sum = 0;
	do
	{
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &number);
		sum += number;
	} while (number != 0);
	printf("숫자들의 합 = %d\n", sum);
	return 0;
}
// 실행결과 :
/*정수를 입력하시오 : 4
정수를 입력하시오 : 56
정수를 입력하시오 : 0
숫자들의 합 = 60*/