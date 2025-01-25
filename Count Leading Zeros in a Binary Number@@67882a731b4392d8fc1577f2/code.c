#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i=31; i>=0; i--){
        if (n>>i & 1) {
            break;
        }
        count++;
    }
    printf("%d", count);
    return 0;
}