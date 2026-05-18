#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main() {
	int a = 99;
	if (a < 100)
		printf("100보다 작군요...\n");
	return 0;
}*/
// 실행결과: 100보다 작군요..

/*int main() {
	int a = 110;
	if (a < 100)
		printf("100보다 작군요..\n");
	printf("100보다 크군요..\n");
	return 0;
}*/
// 실행결과 : 100보다 크군요..

/*int main() {
	int a = 200;
	if (a < 100)
			printf("100보다 작군요..\n");
		printf("거짓이므로 이 문장은 안보이겠죠?\n");
	printf("프로그램 끝!\n");
		return 0;
}*/
// 실행결과 : 거짓이므로 이 문장은 안보이겠죠?
// 프로그램 끝!

/*int main() {
	int a = 200;
	if (a < 100) {
		printf("100보다 작군요..\n");
		printf("거짓이므로 이 문장은 안보이겠죠?\n");
	}
	printf("프로그램 끝!\n");
	return 0;
}*/
// 실행결과: 프로그램 끝!
/*int main() {
	int number;
		printf("정수를 입력하시오:");
		scanf_s("%d", &number);

		if (number>0) {
				printf("양수입니다.");
			printf("입력된 값은 %d입니다.",number);
		}
	return 0;
}*/
// 실행결과 : 정수를 입력하시오:97
// 양수입니다.입력된 값은 97입니다.
/*int main(void) {
	int number;
	printf("정수를 입력하시오:");
	scanf_s("%d", &number);

	if (number < 0) 
		number = -number;
	printf("절대값은 %d입니다.\n", number);
	return 0;
}*/
// 실행결과 : 정수를 입력하시오:56
// 절대값은 56입니다.

/*int main(void) {
	int a;
	printf("어떤 수를 입력하시오:");
	scanf_s("%d", &a);
	if (a % 2 != 0) printf(" %d는 홀수입니다.\n", a);
	if (a % 2 == 0) printf(" %d는 짝수입니다.\n", a);
	return 0;
}*/
// 실행결과 : 어떤 수를 입력하시오:91
// 91는 홀수입니다.
/*int main(void) {
	//int x = 10, y = 20; //실행결과1
	// int x = 30, y = 20; // 실행결과2
	int x = 10, y = 10;// 실행결과3
	if (x>y) printf(" %d is greater than %d\n", x,y);
	if (x<y) printf(" %d is less than %d\n", x,y);
	if (x==y) printf("%d is equal to %d\n", x,y);
	return 0;
}*/
// 실행결과:
// 1. 10 is less than 20
// 2. 30 is greater than 20
// 3. 10 is equal to 10
/*int main(void) {
	int age;
	printf("나이를 입력하세요>");
	scanf_s("%d", &age);
	if (age >= 19)
		printf("성인입니다.\n");
	return 0;
}*/
// 실행결과 : 나이를 입력하세요>99
// 성인입니다.
/*int main() {
	//int a=90; // 실행결과 1
	int a = 110; //실행결과 2
	if (a < 100)
		printf("100보다 작군요..\n");
	else
	printf("100보다 크군요..\n");
	return 0;
}*/
// 실행결과:
// 1. 100보다 작군요..
// 2. 100보다 크군요..
/*int main() {
	//int a=90; // 실행결과 1
	int a = 110; //실행결과 2
	if (a < 100) {
		printf("100보다 작군요..\n");
		printf("참이면 이 문장도 보이겠죠?\n");
	}
	else {
		printf("100보다 크군요..\n");
		printf("거짓이면 이 문장도 보이겠죠?\n");
	}
	return 0;
}*/
// 실행결과:
// 1.100보다 작군요..
// 참이면 이 문장도 보이겠죠 ?
// 2.100보다 크군요..
// 거짓이면 이 문장도 보이겠죠 ?
/*int main() {
	int a ;
	printf("어떤 수를 입력하시오:");
	scanf_s("%d", &a);
	if (a % 2 !=0) {
		printf("%d는 홀수입니다.\n",a);
	}
	else {
		printf("%d는 짝수입니다.\n", a);
	}
	return 0;
}*/
// 실행결과 :
// 어떤 수를 입력하시오:92
// 92는 짝수입니다.
/*int main() {
	int number;
	printf("정수를 입력하시오:");
	scanf_s("%d", &number);
	if (number>0) 
		printf("양수입니다");
	
	else 
		printf("음수입니다");
	printf("입력된 값은 %d입니다", number);
	return 0;
}*/
// 실행결과:
// 정수를 입력하시오:21
// 양수입니다입력된 값은 21입니다
/*int main(void) {
	int a, b, max, min;
	printf("두 수 a,b를 입력하시오:");
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}
	printf("max = %d, min = %d \n", max, min);
}*/
// 실행결과:
//두 수 a, b를 입력하시오 : 3 7
//max = 7, min = 3

/*int main(void) {
	int age;
	printf("나이를 입력하세요>");
	scanf_s("%d",&age);
	if (age >= 19)
		printf("성인입니다.\n");
	else
		printf("미성년입니다.\n");
	return 0;
}*/
// 실행결과:
// 나이를 입력하세요>74
// 성인입니다.

/*int main(void) {
	int number;
	printf("정수를 입력하시오:");
	scanf_s("%d", &number);
	if (number>=0&&number<=100)
		printf("입력한 정수가 0에서 100사이에 있습니다. \n");
	else
		printf("입력한 정수가 0에서 100사이가 아닙니다. \n");
	return 0;
}*/
// 실행결과:
// 정수를 입력하시오:66
// 입력한 정수가 0에서 100사이에 있습니다.

int main(void) {
	int year;
	printf("연도를 입력하시오:");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100!= 0)|| year % 400 == 0)
		printf("%d년은 윤년입니다.\n", year);
	else
		printf("%d년은 윤년이 아닙니다.\n", year);
	return 0;
}
// 실행결과:
// 연도를 입력하시오:2028
// 2028년은 윤년입니다.