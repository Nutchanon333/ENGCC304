#include <stdio.h>

int main() {
    int scores[4];
    int sum = 0;
    int average;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    average = sum / 4;

    printf("Average = %d\n", average);

    return 0;
}