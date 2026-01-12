#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int totalkursi, totalrombongan, angka[105];
	scanf("%d", &totalkursi);
	scanf("%d", &totalrombongan);
	for (int i = 0; i < totalrombongan; i++){
		scanf("%d", &angka[i]);
	}
	
	for (int i = 0; i < totalrombongan-1; i++){
		int idx = i;
		for (int j = i+1; j <totalrombongan; j++){
			if (angka[j] < angka[idx]) idx = j;
		}
		swap(&angka[i], &angka[idx]);
	}
	int count = 0;
	
	for (int i = 0; i < totalrombongan; i++){
		if (angka[i] >= 1){
			if (totalkursi >= angka[i]){
				count++;
				totalkursi = totalkursi - angka[i];
			}
			else break;
		}
	}
	printf("%d\n", count);
	
}
