#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=31; i>=0; i--) {
        if(n>>i & 1) {
            printf("1");
        }else{
            printf("0");
        }
    }
    return 0;
}