#include <stdio.h>

long long int factorial(int x){
	long long int hasil = 1;
	for (int i = 1; i <= x; i++){
		hasil = hasil * i;
	}
	return hasil;
}

int main(){
	long long int baris;
	scanf("%lld", &baris);
	long long int kolom = baris+1;
	long long int babel[kolom];
	for(int i = 0; i < kolom; i++){
		babel[i] = factorial(baris) / (factorial(baris-i) * factorial(i));
		printf("%lld ", babel[i]);
	}
}
