#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    fgets(str, 20, stdin);
    int n = strlen(str);
    for (int i=0; i<n; i++){
        int flag = 1;
        for (int j=0; j<n; j++){
            if(i != j && str[i] == str[j]){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            printf("%c", str[i]);
            return 0;
        }
    }
    return 0;
}