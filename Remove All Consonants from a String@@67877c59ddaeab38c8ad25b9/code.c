#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[30], nstr[30];
    fgets(str, 30, stdin);
    int n = strlen(str), j=0;
    for (int i=0; i<n; i++){
        if (tolower(str[i])=='a'||tolower(str[i])=='e'||tolower(str[i])=='i'||tolower(str[i])=='o'||tolower(str[i])=='u'||tolower(str[i])==' '){
            nstr[j++] = str[i];
        }
    }
    nstr[j] = '\0';
    printf("%s", nstr);
    return 0;
}