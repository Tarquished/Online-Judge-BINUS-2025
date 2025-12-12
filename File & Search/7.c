#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE *f = fopen("testdata.in", "r");
	int z;
	fscanf(f, "%d", &z);
	for (int t = 0; t < z; t++){
	int total = 0, min = 0, max = 0, count = 0, hasil = 0, freq = 0;
		fscanf(f, "%d %d %d", &total, &min, &max);
		for (int i = 0; i < total;i++){
			int num = 0;
			fscanf(f, "%1d", &num);
			if (num == 1){
				count++;
			}
			if (i == total-1){
				hasil = count;
			}
			else if (num == 0){
				hasil = count;
				count = 0;
			}
			if ((hasil >= min) && (hasil <= max)){
				freq++;
				hasil = 0;
			}
		}
		printf("Case #%d: %d\n", t+1, freq);
		
			
	}
	
}
