#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int isUnique(char substrings[][MAX_LEN], int count, char *newSub) {
    for (int i = 0; i < count; i++) {
        if (strcmp(substrings[i], newSub) == 0)
            return 0; 
    }
    return 1; 
}

int countDistinctSubstrings(char *s) {
    int n = strlen(s), count = 0;
    char substrings[MAX_LEN * (MAX_LEN + 1) / 2][MAX_LEN]; 

    for (int i = 0; i < n; i++) {
        char sub[MAX_LEN] = "";
        for (int j = i; j < n; j++) {
            strncat(sub, &s[j], 1);
            if (isUnique(substrings, count, sub)) {
                strcpy(substrings[count], sub);
                count++;
            }
        }
    }
    return count;
}

int main() {
    char s[MAX_LEN];
    scanf("%s", s);
    
    int n = strlen(s), count = 0;
    char substrings[MAX_LEN][n]; 

    for (int i = 0; i < n; i++) {
        char sub[MAX_LEN] = "";
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
