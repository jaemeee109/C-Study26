#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// break
// 10개의 실수를 받아 합계 출력, 중간에 음수를 입력하면 루프 조기종료
/*int main(void)
{
	int i;
	double number, sum = 0.0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d번째 실수를 입력하시오: ", i);
		scanf_s("%lf", &number);
		if (number < 0.0)
			break;
		sum += number;
	}
	printf("합계 = %f", sum);
	return 0;
}*/
// 실행결과:
/*1번째 실수를 입력하시오 : 5
2번째 실수를 입력하시오 : 9
3번째 실수를 입력하시오 : 8
4번째 실수를 입력하시오 : 7
5번째 실수를 입력하시오 : 66
6번째 실수를 입력하시오 : 4444
7번째 실수를 입력하시오 : 545
8번째 실수를 입력하시오 : 8
9번째 실수를 입력하시오 : 7
10번째 실수를 입력하시오 : 1
합계 = 5100.000000*/

/*int main()
{
	int i; 
	for (i = 1; i <= 100; i++)
	{
		printf("for문을 %d회 실행했습니다.\n", i);
		break;
	}
		printf("for문을 종료했습니다.\n");
}*/
// 실행결과 :
/*for문을 1회 실행했습니다.
for문을 종료했습니다.*/

/*int main()
{
	int i; 
	for (i = 1; i <= 100; i++) 
	{
		printf("for문을 %d회 실행했습니다.\n", i); 
		if (i >= 50) 
			break; 
	} printf("for문을 종료했습니다.\n");
}*/
// 실행결과
/*for문을 1회 실행했습니다.
for문을 2회 실행했습니다.
for문을 3회 실행했습니다.
for문을 4회 실행했습니다.
for문을 5회 실행했습니다.
for문을 6회 실행했습니다.
for문을 7회 실행했습니다.
for문을 8회 실행했습니다.
for문을 9회 실행했습니다.
for문을 10회 실행했습니다.
for문을 11회 실행했습니다.
for문을 12회 실행했습니다.
for문을 13회 실행했습니다.
for문을 14회 실행했습니다.
for문을 15회 실행했습니다.
for문을 16회 실행했습니다.
for문을 17회 실행했습니다.
for문을 18회 실행했습니다.
for문을 19회 실행했습니다.
for문을 20회 실행했습니다.
for문을 21회 실행했습니다.
for문을 22회 실행했습니다.
for문을 23회 실행했습니다.
for문을 24회 실행했습니다.
for문을 25회 실행했습니다.
for문을 26회 실행했습니다.
for문을 27회 실행했습니다.
for문을 28회 실행했습니다.
for문을 29회 실행했습니다.
for문을 30회 실행했습니다.
for문을 31회 실행했습니다.
for문을 32회 실행했습니다.
for문을 33회 실행했습니다.
for문을 34회 실행했습니다.
for문을 35회 실행했습니다.
for문을 36회 실행했습니다.
for문을 37회 실행했습니다.
for문을 38회 실행했습니다.
for문을 39회 실행했습니다.
for문을 40회 실행했습니다.
for문을 41회 실행했습니다.
for문을 42회 실행했습니다.
for문을 43회 실행했습니다.
for문을 44회 실행했습니다.
for문을 45회 실행했습니다.
for문을 46회 실행했습니다.
for문을 47회 실행했습니다.
for문을 48회 실행했습니다.
for문을 49회 실행했습니다.
for문을 50회 실행했습니다.
for문을 종료했습니다.*/

// 원금의 10배가 되면 반복을 멈춤
/*#define SEED_MONEY 1000000
int main(void)
{
	int year = 0, money = SEED_MONEY; 
	while (1)
	{
		year++;
		money += money * 0.30; 
		if (money > 10 * SEED_MONEY)
			break;
	}
	printf("%d", year);
	return 0;
}*/
// 실행결과: 9

// continue

/*int main()
{
	int hap = 0;
	int i; for (i = 1; i <= 100; i++) {
		if (i % 3 == 0) // i % 3 == 0은 i를 3으로 나눈 나머지값이 0일 때 참 (즉, 3의 배수)이라는 의미
			continue; hap += i;
	}
	printf(" 1~100까지의 합(3의 배수 제외): %d\n", hap);
	// 결과 : hap=1+2+4+5+7+…
}*/
// 실행결과 : 
// 1~100까지의 합(3의 배수 제외): 3367


// 짝수만 출력
/*int main(void)
{
	int i;
	for (i = 0; i < 10; i++) {
		if (i % 2 != 0) //if (i % 2 == 0)
			continue;
		printf("정수: %d \n", i);
	}
	return 0;
}*/

// 실행결과 :
/*정수: 0
정수 : 2
정수 : 4
정수 : 6
정수 : 8*/

// 소문자를 대문자로 변경
/*int main(void)
{
	char letter;
	while (1)
	{
		printf("소문자를 입력하시오: ");
		scanf_s("%c", &letter);
		if (letter == 'Q')
			break;
		if (letter < 'a' || letter > 'z')
			continue;
		letter -= 32;
		printf("변환된 대문자는 %c입니다.\n", letter);
	}
	return 0;
}*/
// 실행결과 :
/*소문자를 입력하시오 : p
변환된 대문자는 P입니다.*/


// goto

/*int main()
{
	int hap = 0;
	int i; 
	for (i = 1; i <= 100; i++) 
	{ 
		hap += i; if (hap > 2000) goto mygoto; 
	} 
mygoto: 
	printf("1부터 %d까지 합하면 2000이 넘어요.\n", i);
}*/
// 실행결과:
// 1부터 63까지 합하면 2000이 넘어요.

// return
/*int main()
{
	int hap = 0;
	int i; 
	for (i = 1; i <= 100; i++) 
		hap += i; 
	printf("1부터 100까지의 합은 %d 입니다.\n", hap); 
	return 0; printf("프로그램의 끝입니다."); //한번도 실행되지 않는다
}*/
// 실행결과 :
// 1부터 100까지의 합은 5050 입니다.

int main(void)
{
	printf("return() 함수의 리턴값 = %d\n", rt());
	return 0;
 
}
int rt()
{
	int x;
	printf("정수 값을 입력 : ");
	scanf_s("%d", &x);
	return x;
}

// 실행결과 :
/*정수 값을 입력 : 8
return() 함수의 리턴값 = 8*/