#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 다중 선택 if ~ else 문 
/*int main(void) {
    int score;
    char grade;

    printf("성적을 입력하시오: ");
    scanf("%d", &score);

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("학점 %c \n", grade);

    return 0;
}*/
// 실행결과
//성적을 입력하시오: 90
//학점 A

/*    int main(void)
    {

        int a, b, c, largest;

        printf("3개의 정수를 입력하시오: ");
        scanf_s("%d %d %d", &a, &b, &c);

        if (a>b && a>c) // a가 b보다 크고 a가 c보다 크면
            largest = a;
        else if (b>a && b>c)// b가 a보다 크고 b가 c보다 크면
             largest = b;
        else // 그렇지 않으면 c가 최대값인 것은 자명함
            largest = c;
        printf("가장 큰 정수는 %d이다. ₩n", largest);
        return 0;

        }*/
    // 실행결과 : 
    // 3개의 정수를 입력하시오: 27 29 52
    //가장 큰 정수는 52이다.

/*int main(void) {
    char c;
    int ch;

    // scanf 전에 안내 문구를 추가하여 빈 화면이 되는 것을 방지합니다.
    printf("문자를 입력하세요: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
    {
        ch = c - 32;
        printf("%c 의 대문자는 %c 입니다. \n", c, ch); 
    }
    else if (c >= 'A' && c <= 'Z')
    {
        ch = c + 32;
        printf("%c 의 소문자는 %c 입니다. \n", c, ch); 
    }
    else
        printf("%c 는 영문자가 아닙니다. \n", c);

    return 0;
}*/
// 실행 결과:
// 문자를 입력하세요: B
// B 의 소문자는 b 입니다.

// 중첩 if문
/*int main() {
    int a;
    printf("점수를 입력하세요 : ");
    scanf("%d", &a);

    if (a >= 90)
        printf("A");
    else
        if (a >= 80)
            printf("B");
        else
            if (a >= 70)
                printf("C");
            else
                if (a >= 60)
                    printf("D");
                else
                    printf("F");

    printf(" 학점 입니다. ₩n");
}*/
// 실행결과:
// 점수를 입력하세요 : 97
// A 학점 입니다.

/*void main(void) {
    int number;

    printf("숫자를 입력하세요: "); 
    scanf_s("%d", &number);

    if (number >= 50)
        if (number <= 100)
            printf("number 는 50에서 100 사이의 값입니다. ₩n ");
        else
            printf(" number 는 100 보다 큰 값입니다. ₩n ");
    else
        printf(" number 는 50 보다 작은 값입니다. ₩n ");
}*/
// 실행결과:
// 숫자를 입력하세요 : 25
// number 는 50 보다 작은 값입니다.

// switch~case문 
/*int main(void)
{
    int number;
    printf("정수를 입력하시오(0~2):");
    scanf_s("%d", &number);
    switch (number) {
    case 0:
        printf("0을 입력\n");
        break;
    case 1:
        printf("1을 입력\n");
        break;
    case 2:
        printf("2을 입력\n");
        break;
    default:
        printf("다른 번호 입력\n");
        break;
    }
}*/
// 실행결과 :
// 정수를 입력하시오(0~2):1
// 1을 입력

/*int main(void) {
   
        int number;
        printf("정수를 입력하시오(0~2):");
        scanf_s("%d", &number);
        switch (number) {
        case 0:

        case 1:

        case 2:

        default:

            printf("0을 입력\n");
            //break;

            printf("1을 입력₩n");
                //break;

                printf("2을 입력\n");
            //break;

            printf("다른 번호 입력\n");
            //break;
}*/
// 실행결과 : 
// 정수를 입력하시오(0~2):2
// 2을 입력

/*int main(void) {
    int number;
    printf("정수를 입력하시오(0~2):");
    scanf_s("%d", &number);
    switch (number) {
    case 0:

        printf("0을 입력\n");
        break;

    case 1:
    case 2:

            printf("1-2을 입력\n");
            break;
    default:
        printf("다른 번호 입력Wn");
        break;

    }
}*/
// 실행결과:
// 정수를 입력하시오(0~2):0
// 0을 입력

// switch문을 사용할 때 주의해야 할 점
/*switch (number)
{
case x:  // 변수는 사용할 수 없다.
    printf("x와 일치합니다. ");
    break;
case (x + 2): // 변수가 들어간 수식은 사용할 수 없다.
    printf("수식과 일치합니다. ");
    break;
case 0.001: // 실수는 사용할 수 없다.
    printf("실수");
    break;
case "001":  // 문자열은 사용할 수 없다.
    printf("문자열");
    break;
}*/
   
// 달의 일수 계산 프로그램
int main(void) {
    int month, days;
    printf("달을 입력하시오: ");
    scanf_s("%d", &month);
    switch (month) {
    case 2:
        days = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    default:
        days = 31;
        break;
    }
    printf("%d월의 일수는 %d입니다.\n", month, days);
    return 0;
}
// 실행결과:
// 달을 입력하시오 : 3
// 3월의 일수는 31입니다.

    

   