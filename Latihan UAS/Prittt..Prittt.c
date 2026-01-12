#include <stdio.h>
#include <stdlib.h>
long int angka[100005];

int cmp(const void *a, const void *b){
	long int q = *(long int*)a;
	long int w = *(long int*)b;
	
	if (q<w) return -1;
	if (q>w) return 1;
	else return 0;
	
}

int main(){
	long int z;
	scanf("%ld", &z);
	for (int i = 0; i < z; i++){
		scanf("%ld", &angka[i]);
		
	}
	qsort(angka, z, sizeof(long), cmp);
	long int a;
	scanf("%ld", &a);
	for (int i = 0; i < a; i++){
		long target;
		scanf("%ld", &target);
		long index = -1;
		int kiri = 0, kanan = z-1;
		while (kiri <= kanan){
			int mid = kiri + (kanan-kiri)/2;
			if (angka[mid] == target){
				index = mid + 1;
				break;
			}
			else if (angka[mid] < target) kiri = mid+1;
			else kanan = mid-1;
		}
		printf("%ld\n", index);
		
	}
	
}
