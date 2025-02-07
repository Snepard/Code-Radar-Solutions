#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], s2[20];
    scanf("%s\n%s", s1, s2);
    strcat(s1,s2);
    printf("%s", s1)
    return 0;
}