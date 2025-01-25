#include <stdio.h>

bool isLeap(int y) {
    if (y % 4 == 0){
        if (y % 100 == 0){
            return (y % 400 == 0);
        }
        return true;
    }
    return false;
}

int main() {
    int year;
    scanf("%d", &year);
    if(isLeap(year)){
        printf("Leap Year");
    } else{
        printf("Not a Leap Year");
    }
    return 0;
}