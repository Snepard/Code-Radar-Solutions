#include <stdio.h>
#include <ctype.h>

int main() {
    char str[20];
    fgets(str, 20, stdin);
    int n = strlen(str);
    for (int i=0; i<n; i++){
        str[i] = toupper(str[i]);
    }
    printf("%s", str);
    return 0;
}