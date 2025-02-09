#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    fgets(str, 50, stdin);
    n = strlen(str);
    for (int i=0; i<n; i++){
        if (str[i]!='0'||str[i]!='1'){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}