#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char source[50];
    scanf("%s", source);
    printf("Source: %s\n", source);
    printf("Compile first, then run.");
    return 0;
}