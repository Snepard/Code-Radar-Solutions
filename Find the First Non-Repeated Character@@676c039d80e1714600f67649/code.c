#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    fgets(str, 20. stdin);
    for (int i=0; i<n; i++){
        int flag = 0;
        for (int j=i; j<n; j++){
            if(str[i]==str[j]){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            printf("%d", str[i]);
            return 0;
        }
    }
    return 0;
}