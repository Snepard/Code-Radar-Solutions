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
    char str[100], word[20], maxstr[20];
    fgets(str,50,stdin);
    int start = 0, len = strlen(str), maxlen = 0;

    for (int i=0; i<len; i++){
        if (str[i]==' ' || str[i]=='\0' || str[i]=='\n'){
            getSubstring(str, word, start, i-1);
            if(strlen(word)>maxlen){
                strcpy(maxstr, word);
                maxlen = strlen(word);
            }
            start = i+1;
        }
    }
    printf("%s", maxstr);
    return 0;
}