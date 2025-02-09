#include <stdio.h>

struct week{
    char d[20];
    float temp;
};

int main() {
    float sum = 0;
    struct week day[7];
    for (int i=0; i<7; i++){
        scanf("%s %f", day[i].d, &day[i].temp);
        sum += day[i].temp;
    }
    printf("Average Temperature: %.2f", (sum/7));
    return 0;
}