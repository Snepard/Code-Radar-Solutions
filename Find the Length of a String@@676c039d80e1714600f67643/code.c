#include <stdio.h>
#include <string.h>

int main() {
    char str[20];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("0");
        return 0;
    }

    size_t len = strlen(str);
    while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r' || str[len - 1] == ' ')) {
        str[len - 1] = '\0';
        len--;
    }

    if (len == 0) {
        printf("0\n");
    } else {
        printf("%d\n", (int)len);
    }

    return 0;
}
