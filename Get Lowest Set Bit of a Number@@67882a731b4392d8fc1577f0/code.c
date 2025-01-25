#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n = n & (n - 1); 
    int slb = n & -n;
    if (slb == 0) {
        printf("0");
    } else {
        int pos = 0;
        while (slb > 1) {
            slb >>= 1;
            pos++;
        }
        printf("%d", pos);
    }
    return 0;
}