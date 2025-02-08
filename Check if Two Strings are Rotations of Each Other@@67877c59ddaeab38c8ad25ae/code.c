#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], s2[20];
    fgets(s1, 20, stdin);
    fgets(s2, 20, stdin);
    if (strlen(s1) != strlen(s2)){
        printf("No");
        return 0;
    }
    strcat(s1,s1);
    if (strstr(s1, s2) != NULL) {
        printf("No");
    } else{
        printf("Yes");
    }
    return 0;
}