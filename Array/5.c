#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int A[205];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int coolFactor = 0;

        for (int i = 0; i < N; i++) {
            int found = 0; 
            for (int j = 0; j < N && !found; j++) {
                for (int k = j + 1; k < N && !found; k++) {
                    if (j != i && k != i && A[j] + A[k] == A[i]) {
                        found = 1;
                        coolFactor++;
                    }
                }
            }
        }

        printf("Case #%d: %d\n", t, coolFactor);
    }

    return 0;
}
