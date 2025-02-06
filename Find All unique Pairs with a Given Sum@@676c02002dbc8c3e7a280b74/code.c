#include <stdio.h>

int main() {
    int n, t;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    scanf("%d", &t);
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (nums[i]+nums[j]==t){
                printf("%d %d\n", nums[i], nums[j]);
            }
        }
    }
    return 0;
}