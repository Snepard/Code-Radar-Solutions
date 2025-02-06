#include <stdio.h>
#include <limits.h>

void bubbleSort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    if (N < 1 || N == 1) {
        printf("-1\n");
        return 0;
    }
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, N);
    int minDiff = INT_MAX;
    int num1, num2;

    for (int i = 1; i < N; i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff < minDiff) {
            minDiff = diff;
            num1 = arr[i - 1];
            num2 = arr[i];
        }
    }
    printf("%d %d\n", num1, num2);
    return 0;
}
