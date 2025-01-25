#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int c = 0;
    for (int i=0; i<32; i++){
        if (n>>i & 1) {
            break;
        }
        c++;
    }
    printf("%d", c);
    return 0;
}