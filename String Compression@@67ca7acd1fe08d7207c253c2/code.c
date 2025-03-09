// Your code here...
void compressString(char str[], char compressed[]) {
    int len = strlen(str), index = 0;

    for (int i = 0; i < len; i++) {
        compressed[index++] = str[i];
        int count = 1;

        while (i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        if (count > 1) {
            int numLen = sprintf(&compressed[index], "%d", count);
            index += numLen;
        }
    }
    compressed[index] = '\0';

    if (strlen(compressed) >= len) {
        strcpy(compressed, str);
    }
}
