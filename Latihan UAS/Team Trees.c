#include <stdio.h>

long long int calc(long long int *number, int total, int akhir){
	if (akhir >= 0){
		total = total + number[akhir];
		return calc(number, total, akhir-1);
	}
	if (akhir < 0){
		return total;
	}
}

int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		int jumlah;
		long long int angka[1005];
		scanf("%d", &jumlah);
		for (int i = 0; i < jumlah; i++){
			scanf("%lld", &angka[i]);
		}
		long long int hasil = calc(angka, 0, jumlah-1);
		printf("Case #%d: %lld\n", i+1, hasil);
		
	}
	
	
}
