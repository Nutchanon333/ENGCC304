#include <stdio.h>

int main() {
    int cm, m, remaining_cm;

    scanf("%d", &cm);

    m = cm / 100;
    remaining_cm = cm % 100;

    printf("Meter = %d\n", m);
    printf("Centimeter = %d\n", remaining_cm);

    return 0;
}