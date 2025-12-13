#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int cmp(const void *a, const void *b){
	int *q = (int*)a;
	int *w = (int*)b;
	return *q-*w;
}
int main(){
	int angka[105];
	
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		scanf("%d", &angka[i]);
	}
	qsort(angka, z, sizeof(int), cmp);
	int test, target;
	scanf("%d", &test);
	for (int j = 0; j < test; j++){
		scanf("%d", &target);
		int kiri = 0, kanan = z-1;
		int awal = -1;
		while (kiri <= kanan){
			int mid = kiri + (kanan-kiri)/2;
			if (angka[mid] == target){
				awal = mid;
				kanan = mid-1;
			}
			else if (angka[mid] < target)kiri = mid+1;
			else kanan = mid-1;
		}
		int akhir = -1;
		kiri = 0, kanan = z-1;
				while (kiri <= kanan){
					int mid = kiri + (kanan-kiri)/2;
					if (angka[mid] == target){
						akhir = mid;
						kiri = mid+1;
					}
					else if (angka[mid] < target) kiri = mid+1;
					else kanan = mid-1;
				}
		int ans = akhir - awal;
		if (awal != -1 && akhir != -1){
			printf("Angka %d ada %d buah\n", target, ans+1);
		}
		else printf("Angka %d tidak ditemukan.\n", target);
		
		
		
	}
	
}
