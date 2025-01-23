#include <stdio.h>

int main() {
    int n, b;
    scanf("%d %d", &n, &b);
    int val = n & (1<<b);
    printf("%d", val);
    return 0;
}