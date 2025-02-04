#include <stdio.h>

int main() {
    int n, odd=0, even=0;
    scanf("%d", &n);
    int nums[n]; 
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    for (int i=0; i<n; i++){
        if(nums[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("%d %d", even, odd);
    return 0;
}