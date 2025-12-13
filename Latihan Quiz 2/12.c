#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct{
	char nama[105], kota[105];
	int year;
	
}data;
int cmp (const void *a, const void *b){
	data *q = (data*)a;	
	data *w = (data*)b;
	
	if (strcmp(q->nama, w->nama) != 0) return strcmp(q->nama, w->nama);
	return q->year - w->year;
}
int main(){
	FILE *f = fopen("testdata12.in", "r");
	int z;
	fscanf(f, "%d", &z);
	data d[z];
	char kata[105];
	
	for (int i = 0; i < z; i++){
		fscanf(f, " %s", kata);
		char *token = strtok(kata, "#");
		strcpy(d[i].nama, token);
		token = strtok(NULL, "#");
		d[i].year = atoi(token);
		token = strtok(NULL, "#");
		strcpy(d[i].kota, token);
	}
	
	for (int j = 0; j < z; j++){
		if (islower(d[j].nama[0])) {
			d[j].nama[0] = toupper(d[j].nama[0]);
		}
		for (int k = 1; k != '\n'; k++){
			if (isupper(d[j].nama[k])){
				d[j].nama[k] = tolower(d[j].nama[k]);
			}
		}
		d[j].year = 2025- d[j].year;
	}
	
	qsort(d, z, sizeof(data), cmp);
	printf("%-15s %-10s %-15s\n", "Nama", "Umur", "Kota");
	for (int l = 0; l < z; l++){
		printf("%-15s %-10d %-15s\n", d[l].nama, d[l].year, d[l].kota);
		
	}
	
	
	
	
	
	
}
