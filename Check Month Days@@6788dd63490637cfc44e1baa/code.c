#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12){
        prinf("31");
    } else if (n == 2){
        prinf("28");
    } else{
        prinf("30");
    }
    return 0;
}