#include <stdio.h>
#include <string.h>

int main() {
    char str[20], nstr[20];
    int visited[256] = {0};
    fgets(str, 20, stdin);
    int n = strlen(str), j=0;

    for (int i=0; i<n; i++){
        if (visited[str[i]]==0){
            nstr[j] = str[i];
            j++;
            visited[str[i]] = 1;
        }
    }
    printf("%s", nstr);
    return 0;
}