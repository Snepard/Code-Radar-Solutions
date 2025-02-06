#include <stdio.h>

int main() {
    int n, t;
    scanf("%d", &n);
    int nums[n], printed[10000]={0};
    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    scanf("%d", &t);
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (nums[i]+nums[j]==t){
                int a = nums[i], b = nums[j];
                // if (a > b) {
                //     int temp = a;
                //     a = b;
                //     b = temp;
                // }
                if (!printed[a * 100 + b]) {
                    printf("%d %d\n", a, b);
                    printed[a * 100 + b] = 1;
                }
            }
        }
    }
    return 0;
}