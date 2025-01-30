#include <stdio.h>

int main() {
    int n,k;
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", nums[i]);
    }
    int temp = nums[n-1];
    for (int i=0; i<k; i++){
        for (int j=n-1; j>0; j++){
            nums[j] = nums[j-1];
        }
        nums[0] = temp;
    }
    for (int i=0; i<n; i++){
        printf("%d", nums[i]);
    }
    return 0;
}