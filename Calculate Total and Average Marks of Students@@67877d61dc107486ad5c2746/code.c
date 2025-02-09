#include <stdio.h>

struct Student{
    int rn;
    char name[20];
    float marks;
};

int main() {
    int n;
    float sum = 0;
    scanf("%d", &n);
    struct Student st[n];
    for (int i=0; i<n; i++){
        scanf("%d %s %f", &st[i].rn, &st[i].name, &st[i].marks);
        sum += st[i].marks;
    }
    printf("Total Marks: %.2f\nAverage Marks: %.2f", sum, (sum/n));
    return 0;
}