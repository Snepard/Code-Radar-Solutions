#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int count=1;
    fgets(str, 50, stdin);
    int n = strlen(str);
    if (str[0] == '\n' || str[0] == '\0') {
        printf("0");
        return 0;
    }
    for (int i=1; i<n-1; i++){
        if(str[i]==' ' && str[i-1]!=' ' && str[i+1]!=' ') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}