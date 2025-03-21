int findUnsortedSubarray(int arr[], int n) {
    int left = -1, right = -1, min_val, max_val;

    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1]) {
            left = i;
            break;
        }
    if (left == -1) return 0;

    for (int i = n - 1; i > 0; i--)
        if (arr[i] < arr[i - 1]) {
            right = i;
            break;
        }

    min_val = max_val = arr[left];
    for (int i = left; i <= right; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    while (left > 0 && arr[left - 1] > min_val) left--;
    while (right < n - 1 && arr[right + 1] < max_val) right++;

    return right - left + 1;
}
