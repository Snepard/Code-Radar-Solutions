#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    int m1=nums[0], m2=nums[0];
    for (int i=0; i<n; i++){
        if(nums[i]>m1){
            m2 = m1;
            m1 = nums[i];
        } else if (nums[i]>m2){
            m2 = nums[i];
        }
    }
    printf("%d", m1*m2);
    return 0;
} 