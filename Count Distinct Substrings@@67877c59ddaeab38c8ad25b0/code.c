#include <stdio.h>
#include <string.h>

int isUnique(char substrings[][1000], int count, char *newSub) {
    for (int i = 0; i < count; i++) {
        if (strcmp(substrings[i], newSub) == 0)
            return 0;
    }
    return 1;
}

int main() {
    char s[1000];
    scanf("%s", s);
    
    int n = strlen(s), count = 0;
    char substrings[1000][1000]; 

    for (int i = 0; i < n; i++) {
        char sub[1000] = "";
        for (int j = i; j < n; j++) {
            strncat(sub, &s[j], 1);
            if (isUnique(substrings, count, sub)) {
                strcpy(substrings[count], sub);
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
