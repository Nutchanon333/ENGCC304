#include <stdio.h>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);

    char name[50];
    int number;
    scanf("%s %d", name, &number);
    printf("+-----------+\n"); 
    printf("| %s %d |\n", name, number);
    printf("+-----------+\n");
    
    return 0;
}