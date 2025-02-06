#include <stdio.h>

int main() {
    char str[10], nstr[10];
    fgets(str, 10, stdin);
    int n = strlen(str);
    for (int i=0; i<n; i++){
        nstr[i] = str[n-i-1];
    }
    printf("%s", nstr);
    return 0;
}