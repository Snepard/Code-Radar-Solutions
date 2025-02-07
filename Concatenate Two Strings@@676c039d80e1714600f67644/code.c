#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], s2[20];
    fgets(s1, 20, stdin);
    fgets(s2, 20, stdin);
    strcat(s1,s2);
    printf("%s", s1);
    return 0;
}