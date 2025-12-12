#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int kamar[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &kamar[i]);
    }

    int hasil = 0; 

    for (int i = 0; i < N; i++) {
        int unik = 1; 

        for (int j = 0; j < i; j++) {
            if (kamar[i] == kamar[j]) {
                unik = 0; 
                break;
            }
        }

        if (unik == 1) {
            hasil++;
        }
    }

    printf("%d\n", hasil);
    return 0;
}
