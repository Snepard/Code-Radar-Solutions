#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int one = 0;
    for (int i=31; i>=0; i--) {
        if (n & (i << 1)) {
            printf("1");
            one = 1;
        } else if (one) {
            printf("0");
        }
    }
    return 0;
}