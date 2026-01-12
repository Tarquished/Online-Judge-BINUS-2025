#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char kata[205];
}data;

int cmp1(const void *a, const void *b){
	return *(char*)a - *(char*)b;	
}

int cmp(const void *a, const void *b){
	data *q = (data*)a;
	data *w = (data*)b;
	
	return -strcmp(q->kata, w->kata);
}

int main(){
	data d[205];
	int r, c;
	scanf("%d %d", &r, &c);
	for (int i = 0; i < r; i++){
		scanf(" %s", d[i].kata);
		qsort(d[i].kata, strlen(d[i].kata), sizeof(char), cmp1);
	}	
	qsort(d->kata, r, sizeof(data), cmp);
	for (int i = 0; i <r; i++){
		printf("%s\n", d[i].kata);
	}
	
}
