#include <stdio.h>
#include <string.h>

int main() {
    char str[20], nstr[20];
    fgets(str, 10, stdin);
    int n = strlen(str);
    for (int i=0; i<n; i++){
        nstr[i] = str[n-i-1];
    }
    printf("%s", nstr);
    return 0;
}