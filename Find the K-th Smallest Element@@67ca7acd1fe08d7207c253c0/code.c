// Your code here...

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int kthSmallest(int arr[], int n, int k) {
     if (k > n || k <= 0) {
        return -1;
    }
    selectionSort(arr, n);
    return arr[k - 1]; 
}
