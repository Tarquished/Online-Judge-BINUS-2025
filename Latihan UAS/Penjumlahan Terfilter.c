#include <stdio.h>

int main(){
	FILE *f = fopen("angka.txt", "r");
	while (!feof(f)){
		int z;
		fscanf(f, "%d", &z);
		int angka[z+1];
		int total = 0;
		for (int i =0; i<z; i++){
			fscanf(f, "%d", &angka[i]);
			if (angka[i]%z == 0){
				total += angka[i];
			}
		}
		printf("%d\n", total);
		
		
	}
	
}
