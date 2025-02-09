#include <stdio.h>
#include <string.h>

int main() {
    char input[50], str[50], rstr[50];
    fgets(input, 50, stdin);
    int n = strlen(input), j=0;
    for (int i=0; i<n; i++){
        if(input[i]!=' '){
            str[j++] = str[i];
        }
    }
    rstr = strrev(str);
    int m = strlen(str);
    if (strcmp(str, rstr) == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}