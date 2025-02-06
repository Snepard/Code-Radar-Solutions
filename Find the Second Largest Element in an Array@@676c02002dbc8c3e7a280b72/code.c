#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    int l = INT_MIN, sl = INT_MIN;
    for (int i=0; i<n; i++){
        if(nums[i]>l){
            sl = l;
            l = nums[i];
        }
    }
    if(sl == INT_MIN){
        printf("-1");
    }else {
        printf("%d", sl);
    }
    return 0;
}