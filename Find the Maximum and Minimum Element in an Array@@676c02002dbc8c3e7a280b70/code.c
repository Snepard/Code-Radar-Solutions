#include <stdio.h>
int main() {
    int n, min, max;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
        if (nums[i]>max){
            max = nums[i];
        }else if (nums[i]<min){
            min = nums[i];
        }
    }
    printf("%d %d", max, min);
    return 0;
}