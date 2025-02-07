#include <stdio.h>
#include <string.h>

void getSubstring(char str[], char result[], int start, int length) {
    int i;
    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        result[i] = str[start + i];
    }
    result[i] = '\0';
}

int main() {
    char str[50], substr[20], sample[20];
    fgets(str, 50, stdin);
    fgets(substr, 50, stdin);
    int n = strlen(str), len = strlen(substr);
    for (int i=0; i<n; i++){
        getSubstring(str, sample, i, len);
        if (strcmp(substr, sample)==0){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}