#include <stdio.h>
#include <string.h>
#include <stdlib.h>
long long int angka[1000005];
int main(){
	
	long long int z;
	scanf("%lld", &z);
	long long int input = 0;
	for (int i = 0; i < z; i++){
		scanf("%lld", &input);
		if (i != 0){
			angka[i] = angka[i-1] + input;
		}
		else angka[i] = input;
		
	}
	long int testcase;
	long long int num;
	scanf("%ld", &testcase);
	for (int j =0; j < testcase; j++){
		int final = -1;
		scanf("%lld", &num);
		int kiri = 0, kanan = z-1;
		while (kiri <= kanan){
			int mid = kiri + (kanan-kiri)/2;
			if (angka[mid] <= num) {
				final = mid;
				kiri = mid+1;
			}
			else kanan = mid-1;
		}
		if (final != -1){
			printf("Case #%d: %d\n", j+1, final+1);
		}
		else printf("Case #%d: -1\n", j+1);
		
	}
	
	
}
