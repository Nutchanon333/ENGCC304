#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char word[50];
    scanf("%s", word);
    printf("You typed: \"%s\"\n", word);
    return 0;
}