#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 실습 (1)
// 자료형(data type)
// C프로그램은 숫자, 문자, 단어들로 이루어진 데이터를 사용하는데
// 이런 데이터의 종류를 자료형이라고 한다
// int main() {
//	int numTV = 2;
//	int numTablet = 2;
//	int numShaver;
//
//	float TV = 220.00;
//	float Tablet = 300.00;
//
//	printf("%d대의TV와, %d개의태블릿\n", numTV, numTablet);
//	printf("총금액은$%.2f\n", numTV * TV + numTablet * Tablet);
//
//	return 0;
//
// 실행 결과
// 2대의TV와, 2개의태블릿
// 총금액은$1040.00
// }

// 실습 (2)
// 변수(Variable)란 데이터(data)를 저장하기 위해 프로그램에 의해 
// 이름을 할당받은 메모리 공간을 의미하고 이렇게 저장된 값은 변경될 수 있다
//int main() {
//	int a;
//	float b;
//
//	a = 123.45;
//	b = 100;
//
//	printf("a의 값 = = > %d \n", a);
//	printf("b의 값 = = > %f \n", b);
//
// 실행 결과
// a의 값 = = > 123
//	b의 값 = = > 100.000000
//
// 

// 실습 (3)
//int main() {
//	int a, b;
//	float c, d;
//
//	a = 100;
//	b = a + 10;
//	c = 111.1f;
//	d = c + 1.1f;
//	printf("a, b의 값 = = > %d, %d \n", a, b);
//	printf("c, d의 값 = = > %6.2f, %6.2f \n", c, d);
// 실행 결과
// a, b의 값 = = > 100, 110
//	c, d의 값 = = > 111.10, 112.20
//}

// 실습 (4)
//int main() {
//
//	int a, b, c, d;
//	a = 500 + 500;
//	b = a + 200;
//	c = a + b - 200;
//	d = a + b + c;
//	d = d + a;
//	printf("a,b,c,d의 값 = = > %d, %d, %d, %d \n", a, b, c, d);
//	a = b = c = d = 100;
//	printf("a,b,c,d 의 값 = = > %d, %d, %d, %d \n", a, b, c, d);
//	a = 100;
//	a = a + 100;
//	printf("a의 값 = = > %d \n", a);
//
// 실행결과
//  a,b,c,d의 값 = = > 1000, 1200, 2000, 5200
//  a, b, c, d 의 값 = = > 100, 100, 100, 100
//  a의 값 = = > 200
// }

// 실습 (5)
//int main() {
//	char ch1 = 'a'; //문자 변수를 선언하고 문자a를 저장
//	char ch2 = 'b'; // 문자 변수를 선언하고 문자b를 저장
// char를 %c로 출력하면 문자가 출력되고 %d로 출력하면 정수값이 출력된다
//	printf("%c, %d\n", ch1, ch1); //a, 97: a의 아스키코드값은 97
//	printf("%c, %d\n", ch2, ch2); //b,98 b의 아스키 코드값은 98
//
//	return 0;
// 실행결과
// a, 97
// b, 98
//}

// 실습 (6)
// 상수는 변하지 않는 데이터를 담아 놓는 공간
// 변수와 비슷하지만, 한번 데이터를 저장하면 프로그램 실행 시 변하지 않는다는 차이점이 있다
#define PI 3.14
#define BUFFER_SIZE 1024

int main() {

	const int WIDTH = 100; // 선언과 초기화 동시에 해야 함
	const int HEIGHT = 150;
	
	printf("WIDTH : %d\n", WIDTH);
	printf("HEIGHT : %d\n", HEIGHT);
	printf("PI : %lf\n", PI);
	printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);
	
	return 0;

// 실행 결과
//WIDTH: 100
//HEIGHT : 150
//PI : 3.140000
//BUFFER_SIZE : 1024
}