#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char source_code[50];
    char compiler[50];
    char program[50];
    scanf("%s %s %s", source_code, compiler, program);
    printf("Source Code: %s\n", source_code);
    printf("Compiler: %s\n", compiler);
    printf("Program: %s\n", program);
    return 0;
}