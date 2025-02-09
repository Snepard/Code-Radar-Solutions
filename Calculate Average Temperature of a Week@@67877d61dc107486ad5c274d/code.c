#include <stdio.h>

struct week {
    char d[20];
    float temp;
};

int main() {
    int n;
    float sum = 0;
    scanf("%d", &n);
    struct week day[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %f", day[i].d, &day[i].temp);
        sum += day[i].temp;
    }

    printf("Average Temperature: %.2f\n", (sum / n));

    return 0;
}
