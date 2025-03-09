
int findUnsortedSubarray(int arr[], int n) {
    int left = -1, right = -1, min_val, max_val;

    for (int i = 0; i < n - 1; i++)
        if (arr[i] >= arr[i + 1]) {
            left = i;
            break;
        }
    if (left == -1) return 0;

    for (int i = n - 1; i > 0; i--)
        if (arr[i] <= arr[i - 1]) {
            right = i;
            break;
        }

    return right - left + 1;
}