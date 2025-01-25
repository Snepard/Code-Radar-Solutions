#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    if (year % 4 == 0){
        if (y % 100 == 0){
            if (y % 400 == 0){
                printf("Leap Year");
                break;
            }
            printf("Not a Leap Year");
        }
        printf("Leap Year");
    }else{
    printf("Not a Leap Year");
    }
    return 0;
}