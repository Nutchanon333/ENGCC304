#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    int a;
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Positive\n");
    }
    else if (a < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }

    return 0;
}