#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    fgets(str, 20, stdin);
    int n = strlen(str);
    for (int i=0; i<n; i++){
        int flag = 0;
        for (int j=i; j<n; j++){
            if (str[i] == str[j]){
                flag = 1;
            }
        }
        if (flag==0){
            printf("%c", str[i]);
            return 0;
        }
    }
    printf("-");
    return 0;
}