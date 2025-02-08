#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    fgets(str, 20, stdin);
    int n = strlen(str);
    for(int i=0; i<n; i++){
        int freq = 0;
        for (int j=0; j<n; j++){
            if (str[i]==str[j]){
                freq++;
            }
        }
        printf("%c: %d\n", str[i], freq);
    }
    return 0;
}