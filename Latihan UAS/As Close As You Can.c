#include <stdio.h>
#include <stdlib.h>
long long int angka[100005];

int cmp(const void *a, const void *b){
	return *(long long*)a - *(long long *)b;
}
int main(){
	long z, temp;
	scanf("%ld", &z);
	for (int i = 0; i < z; i++){
		scanf("%ld", &temp);
		if (i == 0){
			angka[i] = temp;
		}
		else {
			angka[i] = temp + angka[i-1];
		}
	}

	long a;
	scanf("%ld", &a);
	for (int i = 0; i < a; i++){
		long long target;
		scanf("%lld", &target);
		
		int kiri = 0, kanan = z-1;
		int freq = -1;
		while (kiri <= kanan){
			int mid = kiri + (kanan - kiri)/2;
			if (angka[mid] <= target){
				freq = mid;
				kiri = mid+1;
			}
			else if (angka[mid] > target) kanan = mid-1;
		}
		if (freq != -1)printf("Case #%d: %d\n", i+1, freq+1);
		else printf("Case #%d: -1\n", i+1);
		
		
		
	}
	
}
