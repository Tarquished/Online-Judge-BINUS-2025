#include <stdio.h>

// Menggunakan unsigned long long untuk menampung angka hingga 10^19
// Rumus: (n * (n + 1) * (2n + 1)) / 6
unsigned long long sum_squares(unsigned long long n) {
    // Perhitungan dipecah untuk menghindari overflow di tengah jalan
    // Meskipun n sekitar 2 juta, hasil perkalian 3 variabel bisa besar.
    // 2.000.000^3 / 3 masih muat di unsigned long long.
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

void solve(int t) {
    unsigned long long M;
    scanf("%llu", &M);

    unsigned long long left = 1;
    unsigned long long right = 2000000; // Batas aman, karena (2*10^6)^3 > 10^18
    
    unsigned long long ans = right;

    while (left <= right) {
        unsigned long long mid = left + (right - left) / 2;
        
        if (sum_squares(mid) >= M) {
            ans = mid;      // Simpan jawaban sementara
            right = mid - 1; // Coba cari angka yang lebih kecil
        } else {
            left = mid + 1; // Nilai kurang, cari angka lebih besar
        }
    }

    printf("Case #%d: %llu\n", t, ans);
}

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++) {
        solve(i);
    }
    
    return 0;
}
