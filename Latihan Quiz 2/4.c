#include <stdio.h>
int total;
int hitung(int n){
	if (n == 0) return total;
	else {
		int hasil = n%10;
		int bagi = n/10;
		total = hasil + total;
		hasil = bagi;
		return hitung(hasil);
	}
}

int main(){
	int z;
	int t;
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		scanf("%d", &t);
		printf("Case #%d: %d", i+1, hitung(t));
		total = 0;
	}
	
}
