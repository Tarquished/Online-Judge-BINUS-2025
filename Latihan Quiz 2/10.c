#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
	char title[55], author[55], ISBN[55];
	int year;
	
}data;

int cmp(const void *a, const void *b){
	data *g = (data*)a;
	data *h = (data*)b;
	
	if (strcmp(g->author, h->author) != 0) return strcmp(g->author, h->author);
	else if (h->year != g->year) return h->year - g->year;
	return strcmp(g->title, h->title);
}

int main(){
	FILE *f = fopen("testdata10.in", "r");
	int z;
	char kata[105];
	data d[105];
	fscanf(f, "%d", &z);
	for (int i = 0; i < z; i++){
		fscanf(f, " %[^\n]", kata);
		char *token = strtok(kata, ";");
		strcpy(d[i].ISBN, token);
		token = strtok(NULL, ";");
		strcpy(d[i].title, token);
		token = strtok(NULL, ";");
		strcpy(d[i].author, token);
		token = strtok(NULL, ";");
		d[i].year = atoi(token);
	}
	qsort(d, z, sizeof(data), cmp);
	for (int j = 0; j < z; j++){
		printf("%s - %s (%d)\n", d[j].author, d[j].title, d[j].year);
		
	}
	
	
}
