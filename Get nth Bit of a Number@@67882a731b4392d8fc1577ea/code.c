#include <stdio.h>

int main() {
    int n, b;
    scanf("%d %d", &n, &b);
    int val = (n>>b) & 1;
    printf("%d", val);
    return 0;
}