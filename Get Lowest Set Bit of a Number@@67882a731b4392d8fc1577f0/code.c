#include <stdio.h>

int main() {
    int n;
    scaanf("%d", &n);
    n = n & (n - 1); 
    printf("%d", n & -n);
    return 0;
}