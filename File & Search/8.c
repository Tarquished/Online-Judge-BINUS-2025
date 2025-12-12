#include <stdio.h>
#include <stdlib.h>

void swap(long long int *a, long long int *b){
	long long int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int n, long long int angka[]){
	int idx = 0;
	for (int i = 0; i < n-1; i++){
		idx = i;
		for (int j = i+1; j < n; j++){
			if (angka[j] <= angka[idx]) idx = j; 
		}
		swap(&angka[idx], &angka[i]);
	}
	
}

int main(){
	int z;
	scanf("%d", &z);
	long long int num[z];
	for (int i = 0; i < z; i++){
		scanf("%lld", &num[i]);
	}
	long long int targ;
	scanf("%lld", &targ);
	sort(z, num);
	int count = 0;
	for (int i =0; i < z; i++){
		if (num[i] <= targ){
			count++;
			targ = targ - num[i];
		}
	}
	printf("%d\n", count);
	
	
}
