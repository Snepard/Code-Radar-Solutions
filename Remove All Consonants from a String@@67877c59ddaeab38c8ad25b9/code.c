#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[30], nstr[30];
    fgets(str, 30, stdin);
    int n = strlen(str), j=0;
    for (int i=0; i<n; i++){
        char ch = tolower(str[i]);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||!isalpha(ch)){
            nstr[j++] = str[i];
        }
    }
    nstr[j] = '\0';
    printf("%s", nstr);
    return 0;
}