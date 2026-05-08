#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 논리연산자, 비트연산자, 조건연산자

/*int main() {
	int num1 = 4; // 00000000 00000000 00000000 00000100
	int num2 = 8; // 00000000 00000000 00000000 00001000
	int num3 = num1 & num2;
	printf("%d", num3);
	return 0;
}*/

// 실행결과: 0

/*int main() {
	int num1 = 1; // 00000000 00000000 00000000 00000100
	int num2 = 3; // 00000000 00000000 00000000 00000011
	int num3 = num1 & num2;
	printf("%d", num3);
	return 0;
}*/

// 실행결과: 1

/*int main() {
	int num1 = 4; // 00000000 00000000 00000000 00000100
	int num2 = 1; // 00000000 00000000 00000000 00000001
	int num3 = num1 | num2;
	printf("%d", num3);
	return 0;
}*/
//실행결과 : 5

/*int main() {
	int num1 = 15; // 00000000 00000000 00000000 00001111
	int num2 = 7; // 00000000 00000000 00000000 00000111
	int num3 = num1 ^ num2;
	printf("%d", num3);
	return 0;
}*/
// 실행결과 : 8


int main() {
	int num1 = 10; // 00000000 00000000 00000000 00001010
	int shift1 = num1 << 1; // 00000000 00000000 00000000 00010100
	int shift2 = num1 << 2; // 00000000 00000000 00000000 00101000
	int shift3 = num1 << 3; // 00000000 00000000 00000000 01010000
	int shift4 = num1 >> 1; // 00000000 00000000 00000000 00000101
	printf("%d\n", shift1);
	printf("%d\n", shift2);
	printf("%d\n", shift3);
	printf("%d", shift4);
	return 0;
}

// 실행결과 :
/*
20
40
80
5
*/