#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    fgets(str, 20, stdin);
    int n = strlen(str), c=0;
    for (int i=0; i<n; i++){
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            c++;
        }
    }
    printf("%d", c);
    return 0;
}