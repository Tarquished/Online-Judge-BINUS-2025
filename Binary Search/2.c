#include <stdio.h>
#include <string.h>
#include <math.h>


long long int angka1[100005];
int cari(int n, int target){
	int kiri = 0, kanan = n-1;
	int result = -1;
	
	while (kiri <= kanan){
		int mid = kiri + (kanan-kiri)/2;
		if (angka1[mid] == target){
			result = mid;
			kanan = mid - 1;
		}
		if (angka1[mid] < target) kiri = mid + 1;
		else kanan = mid - 1;
	}
	return result;
}


int main(){
	long long int M, N;
	scanf("%lld %lld", &M, &N);
	long long int angka2[N];
	for (int i = 0; i < M; i++){
		scanf("%lld", &angka1[i]);
	}
	for (int j = 0; j < N; j++){
			scanf("%lld", &angka2[j]);
		}
		
	for (int k = 0; k < N; k++){
		long long int hasil = cari(M, angka2[k]);
		if (hasil != -1){
			printf("%lld\n", hasil+1);
		}
		else printf("-1\n");
		
	}
	
	
}
