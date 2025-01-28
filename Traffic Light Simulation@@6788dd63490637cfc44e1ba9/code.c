#include <stdio.h>

int main() {
    char l;
    scanf("%c", &l);
    if (l == 'R'){
        printf("Stop");
    } else if (l == 'G'){
        printf("Go");
    } else if (l == 'Y'){
        printf("Slow Down");
    } else{
        printf("Invalid input");
    }
    return 0;
}