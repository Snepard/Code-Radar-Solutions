#include <stdio.h>
#include <string.h>

void removeChar(char str[], char ch) {
    int i, j = 0;
    int length = strlen(str);
    for (i = 0; i < length; i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char line[30];
    fgets(line, 30, stdin);
    removeChar(line,' ');
    printf("%s", line);
    return 0;
}