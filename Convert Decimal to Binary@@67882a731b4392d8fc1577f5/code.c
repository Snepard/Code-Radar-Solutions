#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int lzero = 1;
    for (int i=31; i>0; i--) {
        if (n>>i & 1) {
            printf("1");
            lzero = 0;
        } else if (!lzero) {
            printf("0");
        }
    }
    return 0;
}