#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c){
        pritnf("Equilateral");
    } else if (a != b && b != c){
        printf("Sclene");
    } else{
        printf("Isosceles");
    }
    printf("%s", welcome());
    return 0;
}