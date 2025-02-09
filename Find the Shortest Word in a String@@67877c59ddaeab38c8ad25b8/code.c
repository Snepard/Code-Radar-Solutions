#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str[200];  
    fgets(str, sizeof(str), stdin);

    int min_l = INT_MAX, length = 0;
    char sword[200], temp[200];
    
    int i = 0, j = 0;
    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            temp[j++] = str[i];
        } else {
            if (j > 0) {
                temp[j] = '\0';
                length = j;
                if (length < min_l) {  
                    min_l = length;
                    strcpy(sword, temp);
                }
                j = 0;
            }
        }
        if (str[i] == '\0') break;
        i++;
    }
    printf("%s", sword);
    return 0;
}
