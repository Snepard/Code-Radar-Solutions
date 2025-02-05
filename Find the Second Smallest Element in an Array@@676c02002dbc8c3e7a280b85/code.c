#include <stdio.h>
int main() {
    int n, ss=-1;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    int s = nums[0];
    for (int i=0; i<n; i++){
        if(nums[i]<s){
            ss = s;
            s = nums[i];
        }
    }
    printf("%d", ss);
    return 0;
}