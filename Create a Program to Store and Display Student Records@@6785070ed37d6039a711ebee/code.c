#include <stdio.h>

struct Student {
    int rn;
    char name[20];
    float marks;
}

int main() {
    int n, rn;
    float marks;
    char name[20];

    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d %s %f", &rn, name, &marks);
        struct Student i = {rn, name, marks};
        printf("Roll Number: %d, Name: %s, Marks: %.2f", i.rn, i.name, i.marks);
    }
    return 0;
}