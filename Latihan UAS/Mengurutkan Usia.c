#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
	int umur;
	char kata[25];
}data;

int cmp(const void *a, const void *b){
	data *q = (data*)a;
	data *w = (data*)b;
	
	if (q->umur < w->umur) return -1;
	else if (q->umur > w->umur) return 1;
	else {
		return strcmp(q->kata, w->kata);
	}
	
}

int main(){
	data d[1005];
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z;i++){
		scanf(" %s %d", d[i].kata, &d[i].umur);
	}
	qsort(d, z, sizeof(data), cmp);
	
	for (int i = 0; i < z; i++){
		printf("%s %d\n", d[i].kata, d[i].umur);
	}	
}
