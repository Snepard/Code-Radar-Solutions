#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n<2){
        printf("Not Prime");
        return 0;
    }

    bool isPrime = true;
    for(int i=2; i<=(n**0.5); i++) {
        if(n%i==0){
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