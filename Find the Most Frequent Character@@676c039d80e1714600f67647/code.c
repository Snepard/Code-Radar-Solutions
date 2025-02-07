#include <stdio.h>

int main() {
    int maxFreq = 0;
    char str[50];
    fgets(str, 50, stdin);
    char maxChar = str[0];
    for (int i=0; i<n; i++){
        int f = 1;
        for (int j=i+1; j<n; j++){
            if(str[i] == str[j]){
                f++;
            }
        }
        if(f>maxFreq){
            maxChar = str[i];
            maxFreq = f;
        }
    }
    printf("%d", maxChar);
    return 0;
}