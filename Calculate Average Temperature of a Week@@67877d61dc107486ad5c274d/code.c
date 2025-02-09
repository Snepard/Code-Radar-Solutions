#include <stdio.h>

struct week {
    char d[20];
    float temp;
};

int main() {
    int n;
    float sum = 0;

    // Read the number of days
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Number of days must be greater than zero.\n");
        return 1;
    }

    struct week day[n];

    // Read day names and temperatures
    for (int i = 0; i < n; i++) {
        if (scanf("%s %f", day[i].d, &day[i].temp) != 2) {
            printf("Invalid input format.\n");
            return 1;
        }
        sum += day[i].temp;
    }

    // Calculate and print the average temperature
    printf("Average Temperature: %.2f\n", (sum / n));

    return 0;
}
