#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("First is bigger\n");
    }
    else if (a == b)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Second is bigger\n");
    }
    return 0;
}