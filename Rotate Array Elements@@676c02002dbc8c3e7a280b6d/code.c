#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);
    if (n <= 0) {
        return 1;
    }

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &k);
    k = k % n;

    for (int i = 0; i < k; i++) {
        int temp = nums[n - 1];
        for (int j = n - 1; j > 0; j--) {
            nums[j] = nums[j - 1];
        }
        nums[0] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", nums[i]);
    }

    return 0;
}