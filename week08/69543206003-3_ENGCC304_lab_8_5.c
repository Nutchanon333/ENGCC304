#include <stdio.h>

int main() {
    int N, sum = 0, i = 1;
    scanf("%d", &N);
    while (i <= N) {
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}