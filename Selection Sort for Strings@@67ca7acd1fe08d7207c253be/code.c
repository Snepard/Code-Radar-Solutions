void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_i = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min_i]) < 0) {
                min_i = j;
            }
        }
        if (min_i != i) {
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_i]);
            strcpy(arr[min_i], temp);
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}