#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
	return *(long long*)a - *(long long*)b;
}

int main(){
	int z;
	long long int angka, ganjil[10005], genap[10005], totalganjil = 0, totalgenap = 0;
	scanf("%d", &z);
	int test = 0, test1 = 0;
	for (int i = 0; i < z; i++){
		scanf("%lld", &angka);
		if (angka%2 != 0) {
			ganjil[test] = angka;
			totalganjil++;
			test++;
		}
		else {
			genap[test1] = angka;
			totalgenap++;
			test1++;
		}
	}
	qsort(ganjil, totalganjil, sizeof(long long), cmp);
	qsort(genap, totalgenap, sizeof(long long), cmp);
	
	int a;
	scanf("%d", &a);
	for (int i = 0; i <a; i++){
		long long target;
		scanf("%lld", &target);

		int kiri = 0; 
		int kanan = totalgenap-1;
		long long int countGenap = 0;
		while (kiri <= kanan){
			if (genap[kiri] + genap[kanan] >= target){
				countGenap += kanan-kiri;
				kanan--;
			}
			else kiri++;
		}
		
		kiri = 0;
		kanan = totalganjil-1;
		long long int countGanjil = 0;
		while (kiri <= kanan){
			if (ganjil[kiri] + ganjil[kanan] >= target){
				countGanjil += kanan-kiri;
				kanan--;
			}
			else kiri++;
		}
		
		printf("Case #%d: %lld %lld\n", i+1, countGanjil, countGenap);
	}
}
