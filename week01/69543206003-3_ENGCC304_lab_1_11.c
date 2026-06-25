#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char os[50];
    char editor[50];
    scanf("%s", os);
    scanf("%s", editor);
    printf("OS: %s\n", os);
    printf("Editor: %s\n", editor);
    printf("Ready to code!\n");
    return 0;
}