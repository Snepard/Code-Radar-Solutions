#include <stdio.h>
#include <string.h>

int main() {
    char str[20], n, m;

    fgets(str, 20, stdin);
    str[strcspn(str, "\n")] = '\0';

    scanf(" %c %c", &n, &m);  

    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] == n) {
            str[i] = m;
        }
    }

    printf("%s\n", str);
    return 0;
}
