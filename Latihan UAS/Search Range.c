#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
	char nama[300];
	long long score;
	
}data;

data d[15005];
int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z;i++){
		scanf(" %s %lld", d[i].nama, &d[i].score);
	}
	int a;
	scanf("%d", &a);
	for (int j = 0; j < a; j++){
		char satu[300], dua[300];
		scanf(" %s %s", satu, dua);
		
		int kiri = 0;
		int kanan = z-1;
		long long int index1 = -1, index2 = -1;
		while (kiri <= kanan){
			int mid = kiri + (kanan - kiri)/2;
			
			if (strcmp(d[mid].nama, satu) == 0){
				index1 = mid;
				break;
			}
			else if (strcmp(d[mid].nama, satu) < 0) kiri = mid+1;
			else kanan = mid-1;	
		}
		kiri = 0;
		kanan = z-1;
		while (kiri <= kanan){
			int mid = kiri + (kanan - kiri)/2;
				
			if (strcmp(d[mid].nama, dua) == 0){
				index2 = mid;
				break;
			}
			else if (strcmp(d[mid].nama, dua) < 0) kiri = mid+1;
			else kanan = mid-1;	
		}
		if (index1 == -1 || index2 == -1){
			printf("not found\n");
		}
		else if (strcmp(satu, dua) == 0){
			printf("not valid\n");
		}
		else printf("%lld %lld\n", llabs(d[index1].score-d[index2].score), llabs(index1-index2));
		
	}
	
}
