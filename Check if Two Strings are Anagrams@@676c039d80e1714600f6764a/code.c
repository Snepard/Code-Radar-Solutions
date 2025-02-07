#include <stdio.h>
#include <string.h>

void sort(char arr[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j + 1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    char n1[20], n2[20];
    scanf("%s\n%s", n1, n2);
    m1 = strlen(n1);
    m2 = strlen(n2);
    sort(n1, m1);
    sort(n2, m2);
    if(strcmp(n1,n2)==0){
        printf("Yes");
    }else {
        printf("No");
    }
    return 0;
}