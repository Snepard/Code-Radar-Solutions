#include <stdio.h>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);
    printf("%d", a|(1<<n));
    return 0;
}