#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    fgets(str, 20, stdin);
    if (str[0]=='\r'||str[0]=='\n'||str[0]==' '){
        printf("0");
        return 0;
    }
    printf("%d", strlen(str));
    return 0;
}