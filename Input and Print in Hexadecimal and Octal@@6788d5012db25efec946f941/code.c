#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("Hexadecimal: %X\nOctal: 0%o", num, num);
    return 0;
}