#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 과제 : IF ~ Else구조와 Switch ~ Case 문을 이용하여 성적처리를 구하는 프로그램을 작성
int main() {
    int score;
    char gradeIf;
    char gradeSwitch;
    printf("학생의 점수를 입력하세요: ");
    if (scanf("%d", &score) != 1 || score < 0 || score > 100) {
        printf("올바른 점수가 아닙니다. 프로그램을 종료합니다.\n");
        return 1;
    }
    //  IF ~ Else 
    if (score >= 90) {
        gradeIf = 'A';
    }
    else if (score >= 80) {
        gradeIf = 'B';
    }
    else if (score >= 70) {
        gradeIf = 'C';
    }
    else if (score >= 60) {
        gradeIf = 'D';
    }
    else {
        gradeIf = 'F';
    }
    printf("1) IF-Else  결과 등급: %c\n", gradeIf);
    // Switch ~ Case 
    switch (score / 10) {
    case 10:
    case 9:
        gradeSwitch = 'A';
        break;
    case 8:
        gradeSwitch = 'B';
        break;
    case 7:
        gradeSwitch = 'C';
        break;
    case 6:
        gradeSwitch = 'D';
        break;
    default:
        gradeSwitch = 'F';
        break;
    }
    printf("2) Switch-Case 결과 등급: %c\n", gradeSwitch);
    return 0;
}
// 실행결과 :
/* 학생의 점수를 입력하세요: 99
1) IF - Else  결과 등급 : A
2) Switch - Case 결과 등급 : A */