#include <stdio.h>
#include <string.h>

struct rectangle {
    int l;
    int b;
};

int main() {
    int n;
    scanf("%d", &n);
    struct rectangle r[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &r[i].l, &r[i].b);
    }
    for (int i = 0; i < n; i++) {
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i, (t[i].l * t[i].b), 2*(t[i].l + t[i].b));
    }
    return 0;
}
