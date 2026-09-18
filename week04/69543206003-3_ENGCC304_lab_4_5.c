#include <stdio.h>

int main() {
    int grade;
    scanf("%d", &grade);

    switch (grade) {
        case 4:
            printf("Grade = A\n");
            break;
        case 3:
            printf("Grade = B\n");
            break;
        case 2:
            printf("Grade = C\n");
            break;
        case 1:
            printf("Grade = D\n");
            break;
        case 0:
            printf("Grade = F\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

    return 0;
}