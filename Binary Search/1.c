#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char nama[15005][255]; // Ubah 300 jadi 255 sesuai constraint soal agar lebih hemat
long long int angka[15005];
int cari(int n, char *target){
	int kiri = 0, kanan = n-1;
	while (kiri <= kanan){
		int mid = kiri + (kanan - kiri)/2;
		int cmp = (strcmp(nama[mid], target));
		if (cmp == 0) return mid;
		if (cmp < 0) kiri = mid+1;
		else kanan = mid -1;
		
	}
	return -1;
}

int main(){
	long long int z, testcase;
	
	scanf("%lld", &z);
	for (int i = 0; i < z; i++){
		scanf(" %s %lld", nama[i], &angka[i]);
		
	}
	
	scanf("%lld", &testcase);
	char target1[300], target2[300];
	for (int j = 0; j< testcase; j++){
		scanf("%s %s", target1, target2);
		int id1 = cari(z, target1);
		int id2 = cari(z, target2);
		
		if ((id1 == -1) || (id2 == -1)){
			printf("not found\n");
		}
		else if (strcmp(target1, target2) == 0){
			printf("not valid\n");
		}
		else{
			long long int hasil = llabs(angka[id1] - angka[id2]);
			printf("%lld %d\n", hasil, abs(id1-id2));
		}
		
		
	}
	
	
	
}
