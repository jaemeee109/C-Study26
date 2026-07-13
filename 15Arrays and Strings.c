#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//  정수형
/*int main()
{
	int score[2] = { 2147483647 }; //int score[2]= {2147483648};
	float point[2] = { 3.14,15 };
	for (int i = 0; i < 2; i++) { 
		printf("%d\n", score[i]); } 
	for (int j = 0; j < 2; j++) { 
		printf("%f\n", point[j]); } 
	return 0;
}*/
// 실행결과:
/*2147483647
0
3.140000
15.000000*/

// 문자형
/*int main()
{
	char strarr[] = "I Love C"; //크기를 정하지 않고 문자열 할당
	char strarr1[7] = "Baeum-C"; // 크기가 7인 char형 배열을 선언하고 문자열 할당
	printf("%s\n", strarr); // I Love C %s로 문자열 출력
	printf("%s\n", strarr1); // Baeum-C %s로 문자열 출력
	printf("%c\n", strarr1[0]); //0번지 원소 B 문자 하나만 줄력된다. return 0;
}*/
// 실행결과:
/*I Love C
Baeum - C儆儆儆儆儆儆儆儆儆儆 ?
B*/

// 반대로 출력
/*int main()
{
	char str[5] = "LOVE"; char rstr[5];
	int i; for (i = 0; i < 4; i++) { 
		rstr[i] = str[3 - i]; }
	rstr[4] = '\0';
	printf("반대로 출력한 결과: %s\n", rstr); return 0;
}*/
// 실행결과:
// 반대로 출력한 결과: EVOL

// 문자열 함수
// strlen( ) 문자열 길이
/*int main(void)
{
	char str1[] = "Love C"; char str2[] = "사랑해요"; 
	printf("영문 문자열의 길이: %lu\n", strlen(str1)); // NULL 문자 '\0' 미포함
	printf("한글 문자열의 길이: %lu\n", strlen(str2)); // NULL 문자 '\0' 미포함
	printf("영문 문자열의 크기: %lu\n", sizeof(str1)); // NULL 문자 '\0' 포함
	printf("한글 문자열의 크기: %lu\n", sizeof(str2)); // NULL 문자 '\0' 포함
	return 0;
}*/
// 실행결과:
/*영문 문자열의 길이 : 6
한글 문자열의 길이 : 8
영문 문자열의 크기 : 7
한글 문자열의 크기 : 9*/

// strcpy( ) 문자열 복사
/*int main()
{
	char str[5] = "LOVE"; char rstr[5];
	int i; for (i = 0; i < 4; i++) { rstr[i] = str[i]; }
	rstr[4] = '\0';
	printf("복사 출력:%s\n", rstr); return 0;
}*/
/*실행결과 :
복사 출력 : LOVE*/

//strncpy( ) : strcpy( )란 유사하지만 차이점은 strcpy( )처럼 배열 전체가 아닌 
//				str과 cpy 사이에 n(number)만큼 복사

/*int main()
{
	char s1[10] = "LOVE"; // 크기가 10인 char형 배열을 선언하고 문자열 할당
	char s2[10]; // 크기가 10인 char형 배열을 선언
	strncpy(s2, s1, 2); // s1의 문자열을 s2로 2만큼 복사
	s2[2] = '\0'; // 정상 종료를 위한 널(NULL)문자 추가
	printf("%s\n", s2);
	return 0;
}*/
// 실행결과 : LO

// strncat( ) : 붙일문자열에 있는 문자열 n개를 최종문자열 뒤쪽에 이어 붙이는 함수
/*int main()
{
	char str1[10] = "ILOVE";
	char str2[20] = "CLANGUAGE"; // s2 뒤에 붙일 것이므로 배열 크기를 크게 만듦
	//strcat(str2, str1); // s2 뒤에 s1를 붙임
	strncat(str2, str1, 2);
	printf("%s\n", str2);
	return 0;
}*/
// 실행 결과 : CLANGUAGEIL

// strcmp() :두개의 문자열이 같은지, 다른지 검사할 수 있는 문자열 비교함수
/*int main()
{ char str1[10] = "Baeum";
  char str2[10] = "Baeum";
	//char str2[10] = "Baeu";
	//char str2[10] = "Baeum1"; 
int compare = strcmp(str1, str2); // 두 문자열이 같은지 문자열 비교
printf("%d\n", compare); // 0: 두 문자열이 같으면 0
//printf("%d\n", compare); // 1: str1 > str2 이기 때문에 양수 반환
//printf("%d\n", compare); // -1: tr1 < str2 이기 때문에 음수 반환
return 0;
}*/
// 실행결과: 0

// strcmp()를 사용하지 않았을 때 비교방법
/*#define SIZE 5 
int main()
{
	int i;
	int a[SIZE] = { 1, 2, 3, 4, 5 };
	int b[SIZE] = { 1, 2, 3, 4, 5 };
	for (i = 0; i < SIZE; i++) // ② 올바른 배열 비교
	{
		if (a[i] != b[i])
		{
			printf("a[]와 b[]는 같지 않습니다.\n");
			return 0;
		}
	}
	printf("a[]와 b[]는 같습니다.\n");
	return 0;
}*/
// 실행결과: a[]와 b[]는 같습니다.

// gets() : C언어에서 사용하는 입력 함수
// puts( )함수 :C언어에서 사용하는 출력 함수

/*int main()
{
	char array1[10]; 
	char array2[10] = "Good luck"; puts("문자를 입력하세요.");
	gets(array1); // 입력시 종료문자 '\n' 포함되는 것을 감안해야 함
	puts(array1); 
	puts(array2); 
	puts("Nice to meet you."); 
	return 0;
}*/
// 실행결과:
/*문자를 입력하세요.
hihihi
hihihi
Good luck
Nice to meet you.*/


// 다차원 배열
int main(void)
{
	//2차원 배열의 선언
	int array[2][3]; //4행 3열의 배열 길이 선언
	array[0][0] = 1; array[0][1] = 2; array[0][2] = 3;
	array[1][0] = 4; array[1][1] = 5; array[1][2] = 6;
	printf("%d'%d'%d\n", array[0][0], array[0][1], array[0][2]); //0행 출력
	printf("%d'%d'%d\n", array[1][0], array[1][1], array[1][2]); //1행 출력
	return 0;
}
// 실행결과:
/*1'2'3
4'5'6*/