#include <stdio.h> //11403_경로 찾기 //pass

int N;
int arr[101][101];
int m_ans;

int main() {
    scanf("%d", &N); //입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (arr[i][k] && arr[k][j]) { //k를 통해 j로 갈 수 있는 경우
                    arr[i][j] = 1;
                }
            }
        }
    }

    for (int i = 0; i < N; i++) { //출력
        for (int j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}