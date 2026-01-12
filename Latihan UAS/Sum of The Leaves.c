#include <stdio.h>
int num[105];
int jumlah;
void calc(int a, int total){
	total = total + num[a];
	int left = a*2;
	int right = a*2+1;
	
	if (left > jumlah && right > jumlah){
		printf("%d\n", total);
		return;
	}
	
	
	if (left <= jumlah) calc(left, total);
	if (right <= jumlah) calc(right, total);
	
	
}

int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		scanf("%d", &jumlah);
		for (int i = 1; i <= jumlah; i++){
			scanf("%d", &num[i]);
		}
		printf("Case #%d:\n", i+1);
		calc(1, 0);		
	}
	
}
