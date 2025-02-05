#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    scanf("%d", &k);

    for (int i=0; i<n; i++){
        if (nums[i]==k){
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}