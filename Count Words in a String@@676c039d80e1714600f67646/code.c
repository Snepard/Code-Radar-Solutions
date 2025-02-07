#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int count=1;
    fgets(str, 50, stdin);
    int n = strlen(str);
    for (int i=1; i<n-1; i++){
        if(str[i]==' ' && str[i-1]!=' ' && str[i+1]!=' ') {
            count++;
        }
    }
    if (str[0] == ' ' && count == 1) {
        printf("0");
        return 0;
    }
    printf("%d", count);
    return 0;
}