#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char name[50];
    scanf("%s", name);
    printf("%s", name);
    printf("Nice to meet you\n");
    return 0;
}