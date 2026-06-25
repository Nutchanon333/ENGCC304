#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char language[50];
    char compiler[50];
    char output[100];
    scanf("%s %s %s", language, compiler, output);
    printf("Language: %s\n", language);
    printf("Compiler: %s\n", compiler);
    printf("Output Program: %s\n", output);
}