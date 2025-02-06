#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n){
    int rev = 0; 
    if (rev == n){
        return true;
    }
    while(n>0){
        int dig = n%10;
        rev = (rev*10) + dig;
        n/10;
    }
  
    return false;
}

int main() {
    int a, count=0;
    scanf("%d", &a);
    int nums[a];
    for (int i=0; i<a; i++){
        scanf("%d", &nums[i]);
        if (isPalindrome(nums[i])){
            count++;   
        }
    }
    printf("%d", count);
    return 0;
}