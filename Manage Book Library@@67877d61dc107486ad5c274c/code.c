#include <stdio.h>
#include <string.h>

struct Book {
    char name[20];
    char auth[20];
    float price;
};

int main() {
    int n;
    scanf("%d", &n);
    float gp;
    struct Book books[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", books[i].name, books[i].auth, &books[i].price);
    }
    scanf("%f", &gp);
    printf("Books above price %.2f:\n", gp);
    for (int i=0; i<n; i++){
        if(books[i].price > gp){
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].name, books[i].auth, books[i].price);
        }
    }
    return 0;
}
