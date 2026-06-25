#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char input[50];
    char process[50];
    char output[50];
    scanf("%s %s %s", input, process, output);
    printf("Input: %s\n", input);
    printf("Process: %s\n", process);
    printf("Output: %s\n", output);
    return 0;
}