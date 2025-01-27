#include <stdio.h>

int main() {
    int d;
    scanf("%d", &d);

    if (d==1){
        printf("Monday");
    } else if (d==2){
        printf("Tuesday");
    } else if (d==3){
        printf("Wednesday");
    } else if (d==4){
        printf("Thursday");
    } else if (d==5){
        printf("Friday");
    } else if (d==6){
        printf("Saturday");
    } else{
        printf("Sunday");
    }
    
    // switch (d){
    //     case 1:
    //         printf("Monday");
    //         break;
    //     case 2:
    //         printf("Tuesday");
    //         break;
    //     case 3:
    //         printf("Wednesday");
    //         break;
    //     case 4:
    //         printf("Thursday");
    //         break;
    //     case 5:
    //         printf("Friday");
    //         break;
    //     case 6:
    //         printf("Saturday");
    //         break;
    //     case 7:
    //         printf("Sunday");
    //         break;
    }
    return 0;
}