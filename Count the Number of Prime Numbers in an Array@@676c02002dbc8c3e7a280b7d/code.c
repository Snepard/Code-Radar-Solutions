#include <stdio.h>

int main() {
    int n, prime=0, flag=0;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    for (int i=0; i<n; i++){
        for (int j=2; j<i/2; j++){
            if (nums[i]%j == 0){
                flag = 1;
            }
        }
        if (flag == 0){
            prime++;
        }
    }
    printf("%d", prime)
    return 0;
}