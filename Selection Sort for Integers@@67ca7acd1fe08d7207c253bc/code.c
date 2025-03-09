// Your code here...
void selectionSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int min_i = i;
        for (int j=i+1; j<n; j++){
            if(arr[j]<arr[min_i]){
                min_i = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_i];
        arr[min_i] = temp;
    }
}
void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}