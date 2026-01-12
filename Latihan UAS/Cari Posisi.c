#include <stdio.h>

int main(){
	int z;
	scanf("%d", &z);
	int angka[z+5];
	for (int i = 0; i < z; i++){
		scanf("%d", &angka[i]);
	}
	int target;
	scanf("%d", &target);
	
	int kiri = 0;
	int kanan = z-1;
	int index;
	while (kiri <= kanan){
		int mid = kiri + (kanan-kiri)/2;
		if (angka[mid] == target){
			index = mid;
			break;
		}
		else if (angka[mid] < target) kiri = mid+1;
		else kanan = mid-1;
	}
	printf("%d - [%d]", target, index);
}
