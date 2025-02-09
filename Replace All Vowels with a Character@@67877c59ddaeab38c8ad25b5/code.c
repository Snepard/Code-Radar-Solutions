#include <stdio.h>
#include <string.h>

int main() {
    char str[20], ch;
    fgets(str, 20, stdin);
    scanf("%c", &ch);
    printf("%c", ch);
    return 0;
}