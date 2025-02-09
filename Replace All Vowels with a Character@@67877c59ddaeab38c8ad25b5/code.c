#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[20], ch;
    fgets(str, 20, stdin);
    scanf("%c", &ch);
    int n = strlen(str);
    for (int i=0; i<n; i++){
        if (tolower(str[i])=='a'||tolower(str[i])=='e'||tolower(str[i])=='i'||tolower(str[i])=='o'||tolower(str[i])=='u'){
            str[i] = ch;
        }
    }
    printf("%s", str);
    return 0;
}