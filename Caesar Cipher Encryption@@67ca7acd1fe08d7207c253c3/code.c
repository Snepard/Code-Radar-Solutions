// Your code here...
#include <string.h>
#include <ctype.h>

void caesarCipher(const char message[], int shift, char encrypted[]) {
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        if (isalpha(ch)) { 
            char base = isupper(ch) ? 'A' : 'a';
            encrypted[i] = (ch - base + shift) % 26 + base;
        } else {
            encrypted[i] = ch;
        }
    }
    encrypted[strlen(message)] = '\0';
}