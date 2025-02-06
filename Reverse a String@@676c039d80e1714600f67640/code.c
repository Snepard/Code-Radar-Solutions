#include <stdio.h>
#include <string.h>

int main() {
    char str[25], nstr[25];
    fgets(str, 10, stdin);
    int n = strlen(str);
    if (str[n - 1] == '\n') {  
        str[n - 1] = '\0';  
        n--;  
    }
    for (int i=0; i<n; i++){
        nstr[i] = str[n-i-1];
    }
    nstr[n] = '\0';
    printf("%s", nstr);
    return 0;
}