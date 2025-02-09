#include <stdio.h>

struct Student{
    int rn;
    char name[20];
    float marks;
};

void bubbleSort(struct Student students[], int n){
    struct Student temp;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (students[j].marks < students[j+1].marks){
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student st[n];

    for (int i=0; i<n; i++){
        scanf("%d %s %f", &st[i].rn, &st[i].name, &st[i].marks);
    }

    bubbleSort(st, n);
    
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", st[i].rn, st[i].name, st[i].marks);
    }
    return 0;
}