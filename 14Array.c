#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 배열(Array)
/*int main()
{
	int x1 = 1;
	int x2 = 2;
	int x3 = 3;
	int sum = 0; sum = x1 + x2 + x3; printf("합: %d \n", sum); 
	return 0;
}*/
// 실행결과: 합: 6

// 배열 선언
/*int main()
{
	int x[3] = { 1,2,3 };
	int sum = 0; sum = x[0] + x[1] + x[2]; 
	printf("합: %d \n", sum); 
	return 0;
}*/
// 실행결과: 합: 6

// 배열을 초기화 안한 경우

/*int main()
{
	int x[3];
	for (int i = 0; i < 3; i++) { 
		printf("%d번째 원소: %d\n", i, x[i]); 
	}
	return 0;
}*/
// 실행결과:
/*0번째 원소 : -858993460
1번째 원소 : -858993460
2번째 원소 : -858993460*/
// 배열 선언과 초기화를 따로
/*int main()
{ 
	int x[3]; // 배열선언
	x[0] = 1; // 배열 초기화
	x[1] = 2;
	x[2] = 3;
	for (int i = 0; i < 3; i++) { 
		printf("%d번째 원소: %d\n", i, x[i]); }
	return 0;
}*/
// 실행결과 : 
/*0번째 원소: 1
1번째 원소 : 2
2번째 원소 : 3*/

// 배열 선언과 초기화를 동시에
/*int main()
{
	int x[3] = { 1,2,3 };
	for (int i = 0; i < 3; i++) { 
		printf("%d번째 원소: %d\n", i, x[i]); }
	return 0;
}*/
// 실행결과:
/*0번째 원소 : 1
1번째 원소 : 2
2번째 원소 : 3*/

// 배열 초기화시 배열크기보다 초기값이 더 많을 경우
/*int main()
{
	int x[3] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) { 
		printf("%d번째 원소: %d\n", i, x[i]); }
	return 0;
}*/
// 실행결과:
// error C2078: 이니셜라이저가 너무 많습니다.

// 배열 크기를 선언하지 않고 실행하면 정상 작동
/*int main()
{
	int x[] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) { 
		printf("%d번째 원소: %d\n", i, x[i]); }
	return 0;
}*/
// 실행결과 :
/*0번째 원소 : 1
1번째 원소 : 2
2번째 원소 : 3
3번째 원소 : 4
4번째 원소 : 5*/

// 배열에 선언된 원소 값보다 초기값이 더 작을 때
/*int main()
{
	int x[5] = { 1,2 };
	for (int i = 0; i < 5; i++) { 
		printf("%d번째 원소: %d\n", i, x[i]); }
	return 0;
}*/
// 실행결과:
/*0번째 원소 : 1
1번째 원소 : 2
2번째 원소 : 0
3번째 원소 : 0
4번째 원소 : 0*/

// 배열의 모든 원소를 0으로 초기화
/*int main()
{
	int x[5] = { 0 };
	for (int i = 0; i < 5; i++) { 
		printf("%d번째 원소: %d\n", i, x[i]); }
	return 0;
}*/
// 실행결과:
/*0번째 원소 : 0
1번째 원소 : 0
2번째 원소 : 0
3번째 원소 : 0
4번째 원소 : 0*/


// 배열 활용
// 반복문
/*int main()
{
	int x[3];
	for (int i = 0; i < 3; i++) {
		printf("정수를 입력하시오:");
		scanf_s("%d", &x[i]);
	}
	for (int j = 0; j < 3; j++) { 
		printf("%d번째 원소: %d\n", j, x[j]); }
	return 0;
}*/
// 실행결과 :
/*정수를 입력하시오 : 97
정수를 입력하시오 : 56
정수를 입력하시오 : 92
0번째 원소 : 97
1번째 원소 : 56
2번째 원소 : 92*/

// 역순 출력
/*int main()
{
	int x[3];
	for (int i = 0; i < 3; i++) {
		printf("정수를 입력하시오:");
		scanf_s("%d", &x[i]);
	}
	for (int j = 2; j >= 0; j--) { 
		printf("%d번째 원소: %d\n", j, x[j]); }
	return 0;
}*/
// 실행결과 :
/*정수를 입력하시오 : 92
정수를 입력하시오 : 56
정수를 입력하시오 : 97
2번째 원소 : 97
1번째 원소 : 56
0번째 원소 : 92*/

// 배열 크기 
/*int main()
{
	int x[] = { 1,2,3,4,5 };
	sizeof(x);
	printf("%d\n", sizeof(x)); // 20: 4바이트 크기의 요소가 5개이므로 20
	printf("%d\n", sizeof(x) / sizeof(int)); // 5 배열의 크기를 구할 때는
	// 전체 공간을 요소의 크기로 나눠줌
}*/

//실행 결과:
/*20
5*/