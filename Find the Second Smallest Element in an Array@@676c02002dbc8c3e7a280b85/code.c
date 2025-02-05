#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    int s = INT_MAX, ss = INT_MAX;
    for (int i=0; i<n; i++){
        if(nums[i]<s){
            ss = s;
            s = nums[i];
        } else if (nums[i] > s && nums[i] < ss) {
            ss = nums[i];
        }
    }
    if (ss == INT_MAX){
        printf("-1");
        return 0;
    }
    printf("%d", ss);
    return 0;
}