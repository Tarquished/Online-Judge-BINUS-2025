#include <stdio.h>

long long int F(long long int angka){
	if (angka == 1){
		return 1;
	}
	if (angka%2 == 1){
		return F(angka-1) + F(angka+1);
	}
	else return F(angka/2);
	
}

int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z;i++){
		long long int angka;
		scanf("%lld", &angka);
		printf("Case #%d: %lld\n", i+1, F(angka));
	}
	
}
