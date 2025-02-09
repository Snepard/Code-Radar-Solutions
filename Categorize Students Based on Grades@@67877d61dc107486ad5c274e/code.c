#include <stdio.h>
#include <string.h>

struct Student {
    int rn;
    char name[20];
    float marks;
    char grade;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rn, students[i].name, &students[i].marks);
        if (students[i].marks >= 85){
            students[i].grade = 'A';
        } else if (students[i].marks >= 70){
            students[i].grade = 'B';
        } else {
            students[i].grade = 'C';
        }
    }
    for (int i=0; i<n; i++){
        printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].rn, students[i].name, students[i].grade);
    }
    return 0;
}
