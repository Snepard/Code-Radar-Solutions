#include <stdio.h>
#include <string.h>

struct Employee {
    int eid;
    char name[20];
    float salary;
    float bonus;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Employee e[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &e[i].eid, e[i].name, &e[i].salary);
        if (e[i].salary < 50000){
            e[i].bonus = 0.1 * e[i].salary;
        } else {
            e[i].bonus = 0.05 * e[i].salary;
        }
    }
    for (int i=0; i<n; i++){
        printf("Employee ID: %d, Name: %s, Bonus: %c\n", e[i].eid, e[i].name, e[i].bonus);
    }
    return 0;
}
