#include <stdio.h>

int main() {
    int n, b;
    scanf("%d %d", &n, &b);
    int val = n & (1<<n);
    printf("%d", val);
    return 0;
}