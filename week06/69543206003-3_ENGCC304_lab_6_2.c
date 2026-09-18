#include <stdio.h>

int main() {
    int N;
    int i = 1;
    int sum = 0;

    scanf("%d", &N);
    while (i <= N) {
        sum += i;
        i++;
    }
    
    printf("Sum = %d\n", sum);

    return 0;
}