#include <stdio.h>
int main() {
    int n, count;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    for (int i=0; i<n; i++){
        count = 0;
        for (int j=0; j<n; j++){
            if (nums[i] == nums[j]){
                count++;
            }
        }
        if (count>(n/2)){
            printf("%d", nums[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}