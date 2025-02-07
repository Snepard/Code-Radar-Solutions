#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[50];
    int count=1;
    fgets(str, 50, stdin);
    int n = strlen(str);
    for (int i=1; i<n; i++){
        if(str[i]==' ' && isalpha(str[i-1])!=0 && isalpha(str[i+1]!=0)) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}