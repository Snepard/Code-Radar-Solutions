#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int nums[n];
    for (int i=0; i<=n; i++){
        scanf("%d",&nums[i]);
    }
    if(nums[0]>nums[1]){
        printf("%d", nums[0]);
        return 0;
    }
    for (int i=1; i<n; i++){
        if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
            printf("%d", nums[i]);
            return 0;
        }
    }
    if (nums[n]>nums[n-1]){
        printf("%d", nums[n]);
    } else{
        printf("%d", -1);
    }
    return 0;
}