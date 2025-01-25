#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int bin[32];
    int i = 0;
    while (n>0) {
        bin[i] = n%2;
        n /= 2;
        i++;
    }
    for (int j = i-1; j<=0; j--) {
        printf("%d", bin[j]);
    }
    return 0;
}