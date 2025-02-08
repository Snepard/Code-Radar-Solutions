#include <stdio.h>
#include <string.h>

int main() {
    char s1[40], s2[20];
    fgets(s1, 20, stdin);
    fgets(s2, 20, stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    if (strlen(s1) != strlen(s2)) {
        printf("No");
        return 0;
    }

    strcat(s1, s1);

    if (strstr(s1, s2) != NULL) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
