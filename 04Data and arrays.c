// 데이터와 배열
// char : 문자 하나에 해당하는 정수 값 (1byte, -128 ~ +127)
// unsigned char : 부호 없는 문자 해당 정수값 (1byte, 0 ~ 255)
// short : 작은 정수형 (2byte, -32,768 ~ + 32,767)
// unsigned short : 부호 없는 작은 정수형 (2byte, 0 ~ 65,535)
// int : 정수형 (4byte, -2147483648 ~ +2147483647
// unsigned int : 부호 없는 정수형 (4byte, 0 ~ 4,294,967,295)
// long int(또는 long) : 큰 정수형 (4byte, -2147483648 ~ +2147483647)
// unsigned long : 부호 없는 큰 정수형 (4byte, 0 ~ 4,294,967,295)
// float : 실수형 (4byte,±3.4 ×10^-37이상 ± 3.4 × 10^38이하 소수 이하 6자리)
// double : 큰 실수형 (8byte, ±1.7 ×10^-307이상 ± 3.4 × 10^308이하 소수 이하 15자리)
// long double : 큰 실수형 (8byte, double 이상의 표현범위)
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
int main() {
	// size of 
	int sizeofNum = 0;
	int sizeofInt;
	int sizeofNum2 = 0;

	sizeofNum = sizeof sizeofNum;
	sizeofInt = sizeof(int);
	sizeofNum2 = sizeof(sizeofNum2);

	printf("sizeofNum의 크기: %d\n", sizeofNum);
	printf("sizeofInt의 크기: %d\n", sizeofInt);
	printf("sizeofNum2의 크기: %d\n", sizeofNum2);
 
	// 아스키코드
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'a', ch4 = 97;

	printf(" %c %d \n", ch1, ch1);
	printf(" %c %d \n", ch2, ch2);
	printf(" %c %d \n", ch3, ch3);
	printf(" %c %d \n", ch4, ch4);

	// 리터럴 상수

	char c = 'A'; // 문자상수(char)
	int i = 5; // 정수상수(int)
	double d = 3.15; // 실수상수(double)

	// 자동형 변환
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로: %f \n", num1);
	printf("실수 3.1415를 정수로: %d \n", num2);
	printf("큰 정수 129를 작은 정수로 : %d \n", ch);

	
	return 0;
}


// 실행 결과 :
// sizeof
// sizeofNum의 크기: 4
// sizeofInt의 크기 : 4
// sizeofNum2의 크기 : 4
// 아스키코드
// A 65
// A 65
// a 97
// a 97
// 자동형 변환
// 정수 245를 실수로 : 245.000000
// 실수 3.1415를 정수로 : 3
// 큰 정수 129를 작은 정수로 : -127