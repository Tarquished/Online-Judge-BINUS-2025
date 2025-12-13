#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char nama[105];
	long double bonus, uang;
	
}data;


int cmp(const void *a, const void *b){
	data *g = (data*)a;
	data *h = (data*)b;
	
	return h->uang - g->uang;
}

int main(){
	FILE *f = fopen("testdata7.in", "r");
	data d[105];
	int z;
	fscanf(f, "%d", &z);
	char kata[105];
	for (int i = 0; i < z; i++){
		fscanf(f, " %s", kata);	
		char *token = strtok(kata, "#");
		strcpy(d[i].nama, token);
		token = strtok(NULL, "#");
		d[i].uang = atof(token);
		token = strtok(NULL, "#");
		d[i].bonus = atof(token);
	}
	qsort(d, z, sizeof(data), cmp);
	for (int j = 0; j < z; j++){
		printf("%s - Net: %.0lf\n", d[j].nama, (double)(d[j].uang + d[j].bonus) - (double)((d[j].uang) * 0.05));
	}
	
	
	
	
	
}
