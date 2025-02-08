#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int visited[256] = {0};
    fgets(str, 20, stdin);
    int n = strlen(str);
    for(int i=0; i<n; i++){
        int freq = 0;
        if(visited[str[i]] == 0){
            for (int j=0; j<n; j++){
                if (str[i]==str[j]){
                    freq++;
                }
            }
            printf("%c: %d\n", str[i], freq);
            visited[str[i]] = 1;
        }
    }
    return 0;
}