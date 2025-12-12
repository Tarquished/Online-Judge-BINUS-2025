#include <stdio.h>

void solve(int t) {
    int N;
    long long M; // Gunakan long long karena M sampai 10^15
    scanf("%d %lld", &N, &M);

    // Array untuk menampung input
    // Ukuran 10005 cukup untuk constraint N <= 10000
    long long A[10005]; 
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }

    int max_len = -1;      // Inisialisasi -1 sesuai permintaan soal jika tidak ada solusi
    long long current_sum = 0;
    int left = 0;

    // Loop 'right' dari awal sampai akhir array (Sliding Window)
    for (int right = 0; right < N; right++) {
        // 1. Tambahkan elemen kanan ke sum
        current_sum += A[right];

        // 2. Jika sum melebihi M, kecilkan window dari kiri
        while (current_sum > M && left <= right) {
            current_sum -= A[left];
            left++;
        }

        // 3. Cek apakah window valid (sum <= M) dan punya panjang
        // (left <= right memastikan window tidak kosong/negatif panjangnya)
        if (current_sum <= M) {
            int current_len = right - left + 1;
            
            // Jika panjangnya valid (>0), cek apakah ini rekor baru
            if (current_len > 0) {
                if (current_len > max_len) {
                    max_len = current_len;
                }
            }
        }
    }

    printf("Case #%d: %d\n", t, max_len);
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        solve(i);
    }
    return 0;
}
