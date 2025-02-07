#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], s2[20];
    fgets(s1, 20, stdin);
    fgets(s2, 20, stdin);
    s1[strcspn(s1, "\n")] = '\0';
    strcat(s1,s2);
    printf("%s", s1);
    return 0;
}