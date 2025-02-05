#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    for (int i=1; i<=n/2; i++){
        if (nums[i-1]!=nums[-i]){
            printf("NO");
        } else{
            printf("YES");
        }
    }
    return 0;
}