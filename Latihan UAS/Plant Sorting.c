#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
typedef struct{
	char nama[105];
	long long id;
}data;

int cmp(const void *a, const void *b){
	data *q = (data*)a;
	data *w = (data*)b;
	return strcmp(q->nama, w->nama);
}
int main(){
	FILE *f = fopen("testdata5.in", "r");
	int a;
	data d[1005];
	fscanf(f, "%d", &a);
	char kata[105];
	for (int i = 0; i < a; i++){
		fscanf(f, " %[^\n]", kata);
		char *token = strtok(kata, "#");
		d[i].id = atoi(token);
		token = strtok(NULL, "#");
		strcpy(d[i].nama, token);
	}
	qsort(d, a, sizeof(data), cmp);
	for (int i = 0; i < a; i++){
		printf("%lld %s\n", d[i].id, d[i].nama);
	}
}
