#include <stdio.h>
#include <string.h>

int main() {
    char str[20], n, m;

    fgets(str, 20, stdin);
    str[strcspn(str, '\n')] = '\0';

    for (int i=0; i<strlen(str); i++){
        if(str[i]==n){
            str[i] = m;
        }
    }
    printf("%s", str);
    return 0;
}