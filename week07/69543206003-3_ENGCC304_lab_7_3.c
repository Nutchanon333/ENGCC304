#include <stdio.h>

int main() {
    int day;
    scanf("%d", &day);
    if (day == 1) {
        printf("Monday\n");
    } else if (day == 2) {
        printf("Tuesday\n");
    } else if (day == 3) {
        printf("Wednesday\n");
    } else {
        printf("Invalid day\n");
    }
    return 0;
}