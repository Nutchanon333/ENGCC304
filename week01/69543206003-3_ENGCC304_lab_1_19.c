#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    int sum1, sum2;
    scanf("%d %d", &sum1, &sum2);
    printf("Total = %d\n", sum1 + sum2);
}