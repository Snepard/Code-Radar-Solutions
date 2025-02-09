#include <stdio.h>

struct Student{
    int rn;
    char name[20];
    float marks;
};

int main() {
    int n, count=0;
    float threshold;
    scanf("%d", &n);
    struct Student st[n];
    for (int i=0; i<n; i++){
        scanf("%d %s %f", &st[i].rn, &st[i].name, &st[i].marks);
    }
    scanf("%f", &threshold);
    for (int i=0; i<n; i++){
        if(st[i].marks > threshold){
            count++;
        }
    }
    printf("Count of students scoring above %.2f: %d", threshold, count);
    return 0;
}