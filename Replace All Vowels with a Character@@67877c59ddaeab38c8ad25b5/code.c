#include <stdio.h>
#include <string.h>

int main() {
    char str[20], ch;
    fgets(str, 20, stdin);
    scanf("%c", &ch);
    int n = strlen(str);
    for (int i=0; i<n; i++){
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i] = ch;
        }
    }
    printf("%s", str);
    return 0;
}