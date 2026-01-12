#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	return *(int*)a - *(int*)b;
}

int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		int soal = 0, time = 0;
		scanf("%d %d", &soal, &time);
		int angka[soal+5];
		for (int j = 0; j < soal; j++){
			scanf("%d", &angka[j]);
		}
		qsort(angka, soal, sizeof(int), cmp);
		
		int totalMin = 0, totalMax = 0;
		int freqMin = 0, freqMax = 0;
		for (int k = 0; k < soal; k++){
			if (totalMin + angka[k]<= time){
				freqMin++;
				totalMin += angka[k];
			}
			else break;
		}
		
		for (int l = soal-1; l >= 0; l--){
			if (totalMax + angka[l]<= time){
				freqMax++;
				totalMax += angka[l];
			}
			else break;
		}
		
		printf("Case #%d: %d %d\n", i+1, freqMax, freqMin);
		
		
	}
	
}
