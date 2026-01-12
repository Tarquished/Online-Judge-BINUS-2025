#include <stdio.h>

int main(){
	FILE *f = fopen("testdata2.in", "r");
	int z, angka;
	float total = 0;
	
	fscanf(f, "%d", &z);
	for (int i = 0; i < z; i++){
		fscanf(f, "%d", &angka);
		total += angka;
	}
	
	printf("%.2f", total/z);
	
	
}
