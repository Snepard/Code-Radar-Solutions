#include <stdio.h>

struct Student{
    int rn;
    char name[20];
    float marks;
};

int main() {
    int n, f;
    scanf("%d", &n);
    struct Student st[n];
    for (int i=0; i<n; i++){
        scanf("%d %s %f", &st[i].rn, &st[i].name, &st[i].marks);
    }
    scanf("%d", &f);
    for (int i=0; i<n; i++){
        if(st[i].rn == f){
            printf("Roll Number: %d, Name: %s, Marks: %.2f", st[i].rn, st[i].name, st[i].marks);
            return 0;
        }
    }
    printf("Student not found");
    return 0;
}