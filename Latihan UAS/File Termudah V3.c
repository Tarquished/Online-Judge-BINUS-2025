#include <stdio.h>

int main(){
	FILE *fp = fopen("testdata1.in", "r");
	int i = 0;
	int angka[105];
	while (!feof(fp)) {
	    fscanf(fp, "%d", &angka[i]); 
		i++;
	}
	fclose(fp);
	int min = 0, max = 0;
	for (int j = 0; j < i; j++){
		if (angka[j] < min) min = angka[j];
		if (angka[j] > max) max = angka[j];
	}
	int total = max - min;
	printf("%d\n", total);
		
}
