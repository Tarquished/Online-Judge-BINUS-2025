#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];      
    int B[N];      
    int result[N]; 

    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; ++i) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < N; ++i) {
        int target_index = A[i];
        int value = B[i];
        result[target_index] = value;
    }

    for (int i = 0; i < N; ++i) {
        printf("%d", result[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
