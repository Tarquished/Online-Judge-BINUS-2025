#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	return *(long long*)a - *(long long *)b;
}

int main(){
	int z;
	
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		long long int angka[30];
		for (int j = 0; j < 25; j++){
			scanf("%lld", &angka[j]);
		}
		qsort(angka, 25, sizeof(long long), cmp);
		long long a1, a2, a3, a4, a5;
		a1 = angka[0]/2;
		a5 = angka[24]/2;

		a2 = angka[1] - a1;
		a4 = angka[23] - a5;
		long long totalSum = 0;
		for (int l = 0; l < 25; l++){
			totalSum += angka[l];
		}
		a3 = totalSum/10 - (a1+a2+a4+a5);
		
		printf("Case #%d: %lld %lld %lld %lld %lld\n", i+1, a1, a2,a3,a4,a5);
	}
	
	
}
