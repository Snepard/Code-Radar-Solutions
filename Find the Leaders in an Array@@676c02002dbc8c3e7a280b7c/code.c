#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int max_from_right = nums[n - 1];
    printf("%d ", max_from_right);

    for (int i = 0; i >= n-2; i++) {
        if (nums[i] >= max_from_right) {
            max_from_right = nums[i];
            printf("%d ", max_from_right);
        }
    }
    return 0;
}

