#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int freq[256] = {0};
    int maxFreq = 0;
    char maxChar = '~';

    fgets(str, 50, stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = i;
        }
    }

    printf("%c", maxChar);
    return 0;
}
