#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[30];
    fgets(str, 30, stdin);
    int n = strlen(str);
    for (int i=0; i<n; i++){
        if (isupper(str[i])){
            str[i] = tolower(str[i]);
        } else{
            str[i] = toupper(str[i]);
        }
    }
    printf("%s", str);
    return 0;
}