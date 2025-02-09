#include <stdio.h>
#include <string.h>

struct Student {
    int rn;
    char name[20];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rn, students[i].name, &students[i].marks);
        if (students[i].marks <= 50){
            printf("Not All Passed");
            return 0;
        }
    }
    printf("All Passed");
    return 0;
}
