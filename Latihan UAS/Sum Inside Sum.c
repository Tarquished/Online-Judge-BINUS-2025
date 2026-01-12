#include <stdio.h>

int sum(int x){
	int hasil = 0;
	for (int j = 1; j <= x; j++){
		hasil += j;
	}
	return hasil;
	
}

int main(){
	int D, N;
	scanf("%d %d", &D, &N);
	int result = N;
	for(int i = 0; i < D; i++){
		result = sum(result);
	}
	printf("%d\n", result);
	
}
