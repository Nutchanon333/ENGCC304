#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    int a;
    scanf("%d", &a);
    if (a >= 50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}