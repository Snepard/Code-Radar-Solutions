#include <stdio.h>
#include <string.h>

struct Subscription {
    char name[50];
    char type[20];
    float cost;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Subscription users[n];

    float btotal = 0, stotal = 0, ptotal = 0;
    int bcount = 0, scount = 0, pcount = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", users[i].name, users[i].type, &users[i].cost);

        if (strcmp(users[i].type, "Basic") == 0) {
            btotal += users[i].cost;
            bcount++;
        } else if (strcmp(users[i].type, "Standard") == 0) {
            stotal += users[i].cost;
            scount++;
        } else if (strcmp(users[i].type, "Premium") == 0) {
            ptotal += users[i].cost;
            pcount++;
        }
    }
    printf("Basic: %.2f (%d users), Standard: %.2f (%d users), Premium: %.2f (%d users)\n", btotal, bcount, stotal, scount, ptotal, pcount);
    return 0;
}
