#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=n; i>0; i--){
        for (int j=1; j<i; j++){
            printf("%c ", 'A'+j);
        }
        printf("%c", 'A'+i);
    }
    return 0;
}