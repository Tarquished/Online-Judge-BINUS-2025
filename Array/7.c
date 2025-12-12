#include <stdio.h>

int main() {

        int N;
        scanf("%d", &N);

        int matriks[N][N];

        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                scanf("%d", &matriks[j][k]);
            }
        }

        int valid = 1; 

        for (int r = 0; r < N && valid; r++) {
            for (int a = 0; a < N - 1 && valid; a++) {
                for (int b = a + 1; b < N && valid; b++) {
                    if (matriks[r][a] == matriks[r][b]) {
                        valid = 0; 
                    }
                }
            }
        }

        for (int c = 0; c < N && valid; c++) {
            for (int a = 0; a < N - 1 && valid; a++) {
                for (int b = a + 1; b < N && valid; b++) {
                    if (matriks[a][c] == matriks[b][c]) {
                        valid = 0; 
                    }
                }
            }
        }

        if (valid == 1) {
            printf("Yay\n");
        } else {
            printf("Nay\n");
        }
    

    return 0;
}
