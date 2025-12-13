#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char nama[105];
}data;

int main(){
	int z, p;
	char test[105];
	data d[105];
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		scanf(" %s", d[i].nama);
	}
	scanf("%d", &p);
	for (int j = 0; j < p; j++){
		scanf(" %s", test);
		int kiri = 0, kanan = z-1;
		int ans = -1;
		while (kiri <= kanan){
			int mid = kiri + (kanan - kiri)/2;
			if (strcmp(d[mid].nama, test) == 0){
				ans = mid;
				kanan = mid-1;
			}
			else if (strcmp(d[mid].nama, test) < 0)kiri = mid+1;
			else kanan = mid -1;
		}
		if (ans != -1){
			printf("Case #%d: First occurence at index %d\n", j+1, ans+1);
		}
		else printf("Case #%d: Not Found\n", j+1);
	}
	
}
