#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main() {
	int a; // 주소값을 출력하기 위한 변수

	int nData1 = 337;
	int nData2 = -777;
	double dData = 3.141259;
	double dData2 = 314125912345;
	double dData3 = 0.00002;
	char cData = 'X';
	char szData[5] = "ABC";

	printf("printf() 함수 내용 출력\n");
	printf("변수에 저장된 숫자는 %d입니다", 10);
	printf("C언어에서 사용하는 \"특수 문자\"에는 여러가지가 있습니다.\n");
	printf("\t특수 문자의 바로 앞에는 언제나 \\가 와야 합니다.");
	printf("%d\n", 2147483647); // 정수 출력
	printf("%x, %X\n", 10, 10);// 16진수 출력 대문자 소문자
	printf("%o\n", 10); // 8진수 출력
	printf("%f\n", 0.1234);// 실수 출력
	printf("%lf\n", 0.1234); //실수 출력
	printf("%u\n", 2147483647); // 4 byte 크기의 10진수 정수(부호 없음)
	printf("%hi\n", 2147483647); // 2 byte 크기의 10진수 정수(부호 있음)
	printf("%hi\n", 32768); // 2 byte 크기의 10진수 정수(부호 있음)
	printf("%hu\n", 32768); // 2 byte 크기의 10진수 정수(부호 없음)
	printf("%d\n", 2147483648); // 정수 범위 초과
	printf("%li\n", -2147483647);
	printf("%lu\n", 2147483647);
	printf("%lli\n", -9223372036854775807); //8 byte 크기의 10진수 정수 (부호 있는)
	printf("%llu\n", 9223372036854775807); //8 byte 크기의 10진수 정수 (부호 없는)
	printf("%f\n", 0.1234);
	printf("%lf\n", 0.1234);
	printf("%llf\n", 0.1234); //12 byte 크기의 10진수 실수(소수점이 있는 수)
	printf("%e\n", 0.1234); //부동소수점 e(소문자) 방식 실수
	printf("%E\n", 0.1234); //부동소수점 E(대문자) 방식 실수
	printf("%g\n", 0.1234); //경우에 따라 %f와 %e
	printf("%G\n", 0.1234); //경우에 따라 %f와 %e
	printf("%c\n", 'A'); //문자 출력
	printf("%s\n", "안녕하세요"); //문자열 출력
	printf("%p\n", &a);//주소값 출력
	printf("부호있는10진수정수:%%d %d\n", nData1);
	printf("부호있는10진수정수:%%d %d\n", nData2);
	printf("부호없는10진수정수:%%u %u\n", nData1);
	printf("부호없는10진수정수:%%u %u\n", nData2);
	printf("부호없는16진수정수:%%x %x\n", nData1);
	printf("부호없는16진수정수:%%X %X\n", nData1);
	printf("부호없는08진수정수:%%o %o\n", nData1);
	printf("16진수포인터값:%%p %p\n", szData);
	printf("문자열출력:%%s %s\n", szData);
	printf("문자출력:%%c %c\n", cData);
	printf("문자출력:%%C %C\n", cData);
	printf("double값소수출력:%%f %f\n", dData);
	printf("double값지수출력:%%e %e\n", dData);
	printf("double값지수출력:%%E %E\n", dData);
	printf("값에따른f/e 출력:%%g %g\n", dData);
	printf("값에따른f/e 출력:%%g %g\n", dData2);
	printf("값에따른f/e 출력:%%G %G\n", dData2);
	printf("값에따른f/e 출력:%%G %G\n", dData3);

	printf("%d\n", 123);
	printf("%5d\n", 123);
	printf("%05d\n", 123);

	printf("%f\n", 123.45);
	printf("%7.1f\n", 123.45);
	printf("%7.3f\n", 123.45);
	printf("%s\n", "HELLO-C");
	printf("%10s\n", "HELLO-C");

	printf("\n줄바꿈\n");
	printf("\t탭키\t연습\n");
	printf("이것을\r덮어씁니다\n");
	printf("\a\a삐소리2번\n");
	printf("글자가\"강조\"되는효과\n");
	printf("\\\\\\ 역슬래시세개출력\n");

	return 0;
}
