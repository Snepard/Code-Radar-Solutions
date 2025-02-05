#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    for (int i=0; i<n/2; i++){
        if (nums[i]!=nums[n-i-1]){
            printf("NO");
            break;
        } else{
            printf("YES");
        }
    }
    return 0;
}