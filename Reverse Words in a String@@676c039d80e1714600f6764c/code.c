#include <stdio.h>
#include <string.h>

void reverseWord(char word[], int start, int end){
    while(start < end){
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}

void reverseStr(char str[]){
    int length = strlen(str);
    int start = 0;

    for (int i=0; i<length; i++){
        if(str[i] == ' '|| str[i] == '\0' || str[i] == '\n'){
            reverseWord(str, start, i-1);
            start = i+1;
        }
    }
}

int main() {
    char str[50];
    fgets(str, 50, stdin);
    reverseStr(str);
    printf("%s", str);
    return 0;
}