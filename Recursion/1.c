#include <stdio.h>

int count = 0;

int manggil(int n){
	
	
	if (n == 0) return 1;
	if (n == 1) return 2;
	
	if (n%3 == 0){
		count++;
	}
	if (n%5 == 0) return n*2;
	
	return manggil(n-1) + n + manggil(n-2) + n-2;
	
	
	
}

int main(){
	
	int T;
	
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++){
		int a;
		scanf("%d", &a);
		count = 0;
		int hasil;
		hasil = manggil(a);
		
		printf("Case #%d: %d %d\n", i+1, hasil, count);
	}
	
	return 0;
}
