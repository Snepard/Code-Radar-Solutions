#include <stdio.h>
#include <string.h>

int main() {
    char str[20], nstr[20];
    scanf("%s", str);
    int n = strlen(str);
    for (int i=0; i<n; i++){
        nstr[i] = str[n-i-1];
    }
    printf("%s", nstr);
    if(nstr == str){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}