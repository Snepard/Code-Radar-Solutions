#include <stdio.h>

int main() {
    int n, prime=0, flag=0;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    for (int i=0; i<n; i++){
        if (nums[i]==0 || nums[i]==1){
            continue;
        }
        for (int j=2; j<=nums[i]/2; j++){
            if (nums[i]%j == 0){
                flag = 1;
            }
        }
        if (flag == 0){
            prime++;
        }
        flag = 0;
    }
    printf("%d", prime);
    return 0;
}