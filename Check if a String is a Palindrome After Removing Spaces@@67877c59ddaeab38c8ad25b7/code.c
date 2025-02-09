#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int i, j;
    char temp;
    int len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char input[50], str[50], rstr[50];
    fgets(input, 50, stdin);
    int n = strlen(input), j=0;
    for (int i=0; i<n; i++){
        if(input[i]!=' '){
            str[j++] = input[i];
        }
    }

    strcpy(rstr, str);
    reverse(rstr);
    int m = strlen(str);

    if (strcmp(str, rstr) == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}