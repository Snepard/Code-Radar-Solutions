#include <stdio.h>

int main() {
    int n, flag =1;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[n]);
    }
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (nums[i]<nums[j]){
                flag = 0;
            }
        }
        if (flag == 1){
            printf("%d ", nums[i]);
        } else {
            flag = 1;
        }
    }
    return 0;
}