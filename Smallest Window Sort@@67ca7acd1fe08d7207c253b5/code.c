// Your code here...
int findUnsortedSubarray(int arr[10000], int n){
    int i=0;
    for (int j=0; j<n; j++){
        if (arr[j] + 1 != arr[j+1]){
            i++;
        }
    }
    return i;
}