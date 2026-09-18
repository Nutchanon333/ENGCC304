#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Max = %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Max = %d\n", b);
    }
    else
    {
        printf("Max = %d\n", c);
    }

    return 0;
}