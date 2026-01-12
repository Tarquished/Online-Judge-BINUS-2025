#include <stdio.h>


long long angka[100005];
int main(){
	long long int pertama, kedua;
	
	scanf("%lld %lld", &pertama, &kedua);
	for (int i = 1; i <= pertama; i++){
		scanf("%lld", &angka[i]);
	}
	for (int j = 0; j < kedua; j++){
		long long int target;
		scanf("%lld", &target);
		
		long long int kiri = 1;
		long long int kanan = pertama;
		long long int index = -1;
		
		while (kiri <= kanan){
			long long int mid = kiri + (kanan-kiri)/2;
			
			if (angka[mid] == target){
				index = mid;
				kanan = mid-1;
			}
			else if (angka[mid] < target)kiri = mid+1;
			else kanan = mid-1;
		}
		printf("%lld\n", index);
		
	}
	
	
}
