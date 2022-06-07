#include <stdio.h>
#define INF 987654321
#define MIN(a,b) a<b?a:b
int arr[100][100];
 
int main() {
    int N;
    scanf("%d", &N);
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 0) arr[i][j] = INF;
        }
    }
 
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                arr[i][j] = MIN(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] == INF) printf("0 ");
            else printf("1 ");
        }
        printf("\n");
    }
    return 0;
}
