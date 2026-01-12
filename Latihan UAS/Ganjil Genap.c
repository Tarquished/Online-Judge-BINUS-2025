#include <stdio.h>
int F(int a){
	if (a <= 0){
			return 0;	
		}
	if (a%2 == 1){
		return a + F(a-1);
	}
	
	if (a%2 == 0){
		return F(a/2);
	}
	
}


int main(){
	int angka;
	scanf("%d", &angka);
	int hasil = F(angka);
	printf("%d\n", hasil);
}
