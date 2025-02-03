#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    int min = nums[0];
    int max = nums[0];
    for (int i=0; i<n; i++){
        if (nums[i]>max){
            max = nums[i];
        }else if (nums[i]<min){
            min = nums[i];
        }
    }
    printf("%d %d", max, min);
    return 0;
}