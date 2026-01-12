#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long long int angka[100005];

int cmp(const void *a, const void *b){
	return *(long long*)a - *(long long*)b;
}
int main(){
	long long z;
	scanf("%lld", &z);
	for (int i = 0; i < z; i++){
		scanf("%lld", &angka[i]);
	}
	qsort(angka, z, sizeof(long long), cmp);
	long long max = -1;
	for (int i = 0; i < z-1; i++){
		if (llabs(angka[i] - angka[i+1]) > max) {
			max = llabs(angka[i] - angka[i+1]);
		}
	}
	int a = -1;
	for (int i = 0; i < z-1; i++){
		
		if (max == llabs(angka[i] - angka[i+1])){
			if (a != -1){
				printf(" ");
			}
			printf("%lld %lld", angka[i], angka[i+1]);
			a = 0;
		}
	}
	printf("\n");
	
	
	
	
}
