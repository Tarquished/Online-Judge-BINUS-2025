#include <stdio.h>

// Menggunakan long long int karena M bisa sampai 10^15
// N maksimal 5000
long long int A[5005];
long long int prefix[5005];
long long int min_cost[5005]; // Menyimpan harga termurah untuk setiap panjang (length)

int main(){
    int N;
    // Input jumlah elemen array
    scanf("%d", &N); //

    // 1. INPUT & PREFIX SUM
    // Prefix sum memudahkan hitung jumlah segmen tanpa loop ulang
    prefix[0] = 0;
    for(int i = 1; i <= N; i++){
        scanf("%lld", &A[i]); //
        prefix[i] = prefix[i-1] + A[i];
    }

    // 2. PRE-CALCULATION (Mencari Biaya Minimum per Panjang)
    // Loop luar: Coba semua kemungkinan PANJANG segmen (dari 1 sampai N)
    for(int len = 1; len <= N; len++){
        
        // Loop dalam: Geser posisi awal segmen (i) dari kiri ke kanan
        for(int i = 1; i <= N - len + 1; i++){
            
            // Hitung jumlah segmen saat ini menggunakan rumus prefix sum
            int j = i + len - 1; // Posisi akhir segmen
            long long int current_sum = prefix[j] - prefix[i-1];
            
            // --- LOGIKA TANPA ANGKA BESAR (MAGIC NUMBER) ---
            
            // Jika ini adalah segmen PERTAMA yang kita temukan untuk panjang 'len' ini
            // (yaitu saat i == 1), maka langsung set sebagai min_cost sementara.
            if(i == 1){
                min_cost[len] = current_sum;
            } 
            // Jika bukan yang pertama, kita bandingkan:
            // Apakah sum segmen yang baru ini lebih kecil dari rekor sebelumnya?
            else {
                if(current_sum < min_cost[len]){
                    min_cost[len] = current_sum;
                }
            }
        }
    }

    // 3. JAWAB QUERY
    int Q;
    scanf("%d", &Q); //
    
    for(int q = 1; q <= Q; q++){
        long long int M;
        scanf("%lld", &M); //
        
        // Strategi: Cari panjang TERBESAR (len) yang biayanya <= M.
        // Kita loop MUNDUR dari N (paling panjang) ke 1 (paling pendek).
        
        int ans = -1; // Default -1 jika tidak ada solusi
        
        for(int len = N; len >= 1; len--){
            // Cek tabel min_cost kita
            if(min_cost[len] <= M){
                ans = len; // Ketemu! Karena loop mundur, ini pasti yang terpanjang.
                break;     // Langsung stop, tidak perlu cek yang lebih pendek.
            }
        }
        
        // Output sesuai format Case #X: Y
        printf("Case #%d: %d\n", q, ans);
    }

    return 0;
}
