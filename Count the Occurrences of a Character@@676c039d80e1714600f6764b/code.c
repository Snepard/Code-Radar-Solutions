#include <stdio.h>
#include <string.h>

int main() {
    char word[20], ch;
    scanf("%s %c", word, &ch);
    int n = strlen(word), count=0;
    for (int i=0; i<n; i++){
        if(word[i]==ch){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}