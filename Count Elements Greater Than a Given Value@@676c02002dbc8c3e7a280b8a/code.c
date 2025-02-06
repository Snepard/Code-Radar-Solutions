#include <stdio.h>

int main() {
    int n,k, count=0;
    scanf("%d %d",&n,&k);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
        if (nums[i] > k){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}