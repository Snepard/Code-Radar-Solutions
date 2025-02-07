#include <stdio.h>
#include <string.h>

int main() {
    char str[20], test[]='\r\n';
    fgets(str, 20, stdin);
    if (strcmp(str,test)||str[0]=='\n'){
        printf("0");
        return 0;
    }
    printf("%d", strlen(str));
    return 0;
}