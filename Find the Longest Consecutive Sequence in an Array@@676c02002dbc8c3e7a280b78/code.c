#include <stdio.h>

void bubbleSort(int arr[], n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

void insertLast(int arr[], int *m, int val) {
    arr[*m] = val;
    (*m)++;
}

int maxVal(int arr[], n){
    int max = arr[0];
    for (int i=0; i<n; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n, m=1, c;
    scanf("%d", &n);
    int nums[n], count[1];
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }
    bubbleSort(nums, n);
    for(int i=0; i<n-1; i++){
        if(nums[i+1] == nums[i]+1){
            c++;
        }else{
            insertLast(count,&m,c)
            c == 0;
        }
    }
    printf("%d", maxVal(count, m))
    return 0;
}