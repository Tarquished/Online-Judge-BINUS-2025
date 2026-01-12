#include <stdio.h>

int main(){
	FILE *f = fopen("testdata3.in", "r");
	
	int angka;
	int genap[1005];
	int ganjil[1005];
	int i = 0, j = 0;
	while (fscanf(f, "%d", &angka) != EOF){
		if (angka%2 == 1){
			ganjil[i] = angka;
			i++;
		}
		else{
			genap[j] = angka;
			j++;
		}
	}	
	int totalgenap = genap[0];
	int totalganjil = 0;
	for (int a = 1; a < j; a++){
		totalgenap = totalgenap*genap[a];
	}
	for (int b = 0; b < i; b++){
		totalganjil += ganjil[b];
	}
	printf("%d", totalgenap-totalganjil);
	
	
}
