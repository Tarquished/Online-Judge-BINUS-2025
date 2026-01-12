#include <stdio.h>

int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		long long int angka;
		scanf("%lld", &angka);
		
		long long kiri = 1;
		long long kanan = 2000000;
		long long ans = -1;
		
		while (kiri <= kanan){
			long long mid = kiri + (kanan-kiri)/2;
			
			if (mid*(mid+1)*(2*mid+1)/6 >= angka){
				ans = mid;
				kanan = mid-1;
			}
			else kiri = mid+1;
		}
		printf("Case #%d: %lld\n", i+1, ans);
	}
	
}
