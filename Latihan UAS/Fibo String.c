#include <stdio.h>
char one, two;
int fibo(int num){
	if (num == 0){
		printf("%c", one);
	}
	
	if (num == 1){
		printf("%c", two);
	}
	
	if (num > 1) return fibo(num-1) + fibo(num-2);
	
	
	
	
}

int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i <z; i++){
		int angka;
		scanf("%d %c %c", &angka, &one, &two);
		printf("Case #%d: ", i+1);
		fibo(angka);
		printf("\n");
	}
	
}
