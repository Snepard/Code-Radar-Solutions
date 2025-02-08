#include <stdio.h>
#include <string.h>

int expand(char str[], int left, int right, int *start) {
    int n = strlen(str);
    while (left >= 0 && right < n && str[left] == str[right]) {
        left--;
        right++;
    }
    int len = right - left - 1;
    *start = left + 1;
    return len;
}

int main() {
    char str[50];
    fgets(str, 50, stdin);
    int n = strlen(str), maxLen = 0, startIndex = 0;
    for (int i = 0; i < n; i++) {
        int start1, start2;
        int len1 = expand(str, i, i, &start1);
        int len2 = expand(str, i, i + 1, &start2);
        
        if (len1 > maxLen) {
            maxLen = len1;
            startIndex = start1;
        }
        if (len2 > maxLen) {
            maxLen = len2;
            startIndex = start2;
        }
    }
    for (int i = startIndex; i < startIndex + maxLen; i++) {
        printf("%c", str[i]);
    }
    return 0;
}