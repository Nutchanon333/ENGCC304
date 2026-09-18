#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
            break;
    }

    return 0;
}