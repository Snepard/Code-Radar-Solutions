#include <stdio.h>

struct students {
    int rn;
    char name[20];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct students s[n];
    for (int i=0; i<n; i++){
        scanf("%d %s %f", &s[i].rn, s[i].name, &s[i].marks);
    }
    float tScore = s[0].marks;
    for (int i=1; i<n; i++){
        if(s[i].marks > tScore){
            tScore = s[i].marks;
        }
    }
    for (int i=0; i<n; i++){
        if(s[i].marks == tScore){
            printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f", s[i].rn, s[i].name, s[i].marks);
            return 0;
        }
    }
    return 0;
}