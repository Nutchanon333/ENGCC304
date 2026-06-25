#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    int num1, num2, num3, sum;
    scanf("%d %d %d", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    printf("Answer = %d\n", sum);
    return 0;
}