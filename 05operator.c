#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 1. 수식연산자
// int main() {
//	int x = 1;
//	printf("3+2의 값은 %d\n", 3+2);
//	printf("3-2의 값은 %d\n", 3-2);
//	printf("x의 값은 %d\n", x);
//	printf("x+1의 값은 %d\n", x+1);
//
//	return 0;
//}
// 실행 결과
// 3+2의 값은 5
// 3 - 2의 값은 1
// x의 값은 1
// x + 1의 값은 2

// 2. 산술 연산자
/*int main() {
	int x, y, result;
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	result = x + y; // 덧셈 연산을 하여 결과를 result에 대입
	printf("%d + %d = %d\n", x, y, result);

	result = x - y; // 뺄셈 연산
	printf("%d - %d = %d\n", x, y, result);

	result = x * y; // 곱셈 연산
	printf("%d + %d = %d\n", x, y, result);

	result = x / y; // 나눗셈 연산
	printf("%d / %d = %d\n", x, y, result);

	result = x % y; // 나머지 연산
	printf("%d %% %d = %d\n", x, y, result);
	return 0;
}*/

// 실행결과
//두개의 정수를 입력하시오: 5 6
// 5 + 6 = 11
// 5 - 6 = -1
// 5 + 6 = 30
// 5 / 6 = 0
// 5 % 6 = 5

// 3. 나머지 연산자
/*int main() {
	printf("%d\n", 1%3); // 1을 1로 나누면 몫은0 나머지는 1
	printf("%d\n", 2%3); // 2를 3으로 나누면 몫은 0 나머지는 2
	printf("%d\n", 3%3); // 3을 3으로 나누면 몫을 1 나머지는 0
	printf("%d\n", 4%3); // 4를 3으로 나누면 몫은 1 나머지는 1
	printf("%d\n", 5%3); // 5를 3으로 나누면 몫은1 나머지는 2
	printf("%d\n", 6%3); // 6을 3으로 나누면 몫은 2 나머지는 0 
	return 0;
}*/
// 실행 결과
/*
1
2
0
1
2
0
*/

// 4. 나눗셈 연산자
/*int main() {
	double x, y, result;
	printf("두개의 실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	result = x + y; // 덧셈 연산을 해서 결과를 result에 대입
	printf("%f / %f = %f\n", x, y, result);
	result = x / y; // 나눗셈 연산을 해서 결과를 result에 대입
	printf("%f / %f = %f\n", x, y, result);
	return 0;
}*/
// 실행 결과
/*
두개의 실수를 입력하시오 : 9 1
9.000000 / 1.000000 = 10.000000
9.000000 / 1.000000 = 9.000000
*/

// 5. 증감 연산자
/*int main() {
	int x = 1, nextx = 0;
	x = 0;
	nextx = ++x;
	printf("nextx=%d, x = %d\n", nextx, x);

	x = 0;
	nextx = x++;
	printf("nextx=%d, x = %d\n", nextx, x);

	x = 0;
	nextx = --x;
	printf("nextx=%d, x = %d\n", nextx, x);

	x = 0;
	nextx = x--;
	printf("nextx=%d, x = %d\n", nextx, x);

	return 0;
}*/

//실행결과
/*nextx = 1, x = 1
nextx = 0, x = 1
nextx = -1, x = -1
nextx = 0, x = -1*/

// 6. 대입연산자

/*int main() {
	int x, y;

	x = 1;
	printf("수식 x + 1의 값은 %d\n", x + 1);
	printf("수식 y = x + 1의 값은 %d\n", y = x + 1);
	printf("수식 y = 10 (x = 2 + 7)의 값은 %d\n", y=10+(x=2+7));
	printf("수식 y = x = 3 의 값은 %d\n", y = x = 3);
	return 0;
}*/

//  실행결과
/*수식 x + 1의 값은 2
수식 y = x + 1의 값은 2
수식 y = 10 (x = 2 + 7)의 값은 19
수식 y = x = 3 의 값은 3*/

// 7.복합 대입연산자

/*int main(void) {
	int x = 10, y = 10, z = 33;

	x += 1; // x = x + 1
	y *= 2; // y = y * 2
	z %= x+y;  // z = z %(x+y);

	printf("x=%d y=%d z=%d \n", x, y, z);
	return 0;
}*/

// 실행 결과
// x = 11 y = 20 z = 2


// 8. 관계연산자
int main(void) {
	int x, y;
	printf("두개의 정수를 입력하시오:");
	scanf("%d %d", &x, &y);
	printf("x == y의 결과값: %d\n", x == y);
	printf("x != y의 결과값: %d\n", x != y );
	printf("x > y의 결과값: %d\n", x > y);
	printf("x < y의 결과값: %d\n", x < y );
	printf("x >= y 의 결과값: %d\n", x >= y );
	printf("x <= y의 결과값: %d\n", x <= y);
	return 0;
}
// 실행결과
/*두개의 정수를 입력하시오 : 9 7
x == y의 결과값 : 0
x != y의 결과값 : 1
x > y의 결과값 : 1
x < y의 결과값 : 0
	x >= y 의 결과값 : 1
	x <= y의 결과값 : 0*/

