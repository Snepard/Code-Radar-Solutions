#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    int s = nums[0], ss = -1;
    for (int i=0; i<n; i++){
        if(nums[i]<s){
            ss = s;
            s = nums[i];
        } else if(nums[i]<ss && nums[i]>ss){
            ss = nums[i];
        }
    }
    printf("%d", ss);
    return 0;
}