#include <stdio.h>

int main() {
    char str[10], nstr[10];
    fgets(str, 10, stdin);
    for (int i=0; i<10; i++){
        nstr[i] = str[10-i-1];
    }
    printf("%s", nstr);
    return 0;
}