#include <stdio.h>

int main() {
    int n, flag;
    scanf("%d", &n);
    int nums[n], used[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    for (int i=0; i<n; i++){
        int c = 0;
        // for (int j=0; j<n; j++){
        //     if(nums[i]==used[j]){
        //         flag = 0;
        //     }
        // }
        // if (flag == 1){
            for (int j=0; j<n; j++){
                if(nums[i]==nums[j]){
                    c++;
                }
                nums[i] = j-n;
            }
            used[i] = nums[i];
        // }
        printf("%d %d\n", nums[i], c);
    }
    return 0;
}