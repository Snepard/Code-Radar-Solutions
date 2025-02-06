#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n], leaders[n], count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int max_from_right = nums[n - 1];
    leaders[count++] = max_from_right;
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= max_from_right) {
            max_from_right = nums[i];
            leaders[count++] = max_from_right;
        }
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    return 0;
}
