#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    bool isPrime = true;
    for(int i=0; i<(n/2); i++) {
        if(n%i!=0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        printf("Prime");
    } else{
        printf("Not Prime");
    }
    return 0;
}