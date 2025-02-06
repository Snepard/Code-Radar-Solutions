#include <stdio.h>
int main() {
    int n, l=-1, sl=-1;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    for (int i=0; i<n; i++){
        if(nums[i]>l){
            sl = l;
            l = nums[i];
        }
    }
    printf("%d", sl);
    return 0;
}