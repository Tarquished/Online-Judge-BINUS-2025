#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char item[105];
	int awal, akhir;
}data;
	data d[105];
	
	
	int cmp(const void *a, const void *b){
		data *q = (data*)a;
		data *w = (data*)b;
		return strcmp(q->item, w->item);
	}
	
int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		scanf("%s %d %d", d[i].item, &d[i].awal, &d[i].akhir);
	}
	qsort(d, z, sizeof(data), cmp);
	for (int i = 0; i < z; i++){
		printf("%s %d\n", d[i].item, d[i].awal-d[i].akhir);
	}
}
