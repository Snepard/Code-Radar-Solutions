#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    int l = nums[0], sl = nums[0];
    for (int i=0; i<n; i++){
        if(nums[i]>l){
            sl = l;
            l = nums[i];
        }
    }
    printf("%d", sl);
    return 0;
}