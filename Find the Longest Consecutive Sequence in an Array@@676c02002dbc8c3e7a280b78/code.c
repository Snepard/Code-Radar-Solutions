#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertLast(int arr[], int *m, int val) {
    arr[*m] = val;
    (*m)++;
}

int maxVal(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n, m = 0, c = 1;
    scanf("%d", &n);
    int nums[n], count[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    bubbleSort(nums, n);

    for (int i = 0; i < n - 1; i++) {
        if (nums[i + 1] == nums[i] + 1) {
            c++;
        } else {
            insertLast(count, &m, c);
            c = 1;
        }
    }
    insertLast(count, &m, c);

    printf("%d", maxVal(count, m));

    return 0;
}