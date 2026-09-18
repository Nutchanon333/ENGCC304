#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    int a;
    scanf("%d", &a);
    if (a <= 15)
    {
        printf("Cold");
    }
    else if (a >= 25)
    {
        printf("Hot");
    }
    else
    {
        printf("Normal");
    }
    return 0;
}