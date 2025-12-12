#include <stdio.h>
#include <string.h>

int main(){
	int Z, jumlah;
	char nama[105];
	char a,b;
	
	FILE *f = fopen("testdata.in", "r");
	fscanf(f, "%d", &Z);
	for (int t = 0; t < Z; t++){
	
	fscanf(f, " %100[^\n]", nama);
	fscanf(f, "%d", &jumlah);
	int check[26] = {0};
	for (int i=0; i < jumlah; i++){
		fscanf(f, " %c %c", &a, &b);
		if (check[a - 'A']) continue;
		for (int j = 0; j < strlen(nama); j++){
			if (nama[j] == a){
				nama[j] = b;
			}
			check[a - 'A'] = 1;
		}
	}
	int freq[26] = {0};
	for (int k = 0; k < strlen(nama); k++){
		freq[nama[k] - 'A']++;
	}
	
	for (int l = 0; l < 26; l++){
		if (freq[l] > 0){
			printf("%c %d\n", l + 'A', freq[l]);
		}
	}
	
	}
	fclose(f);
	return 0;
}
