#include <stdio.h>

int main() {
    int n, flag =1;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (nums[i]<nums[j]){
                flag = 0;
                break;
            }
        }
        if (flag == 1){
            printf("%d ", nums[i]);
        }
    }
    return 0;
}