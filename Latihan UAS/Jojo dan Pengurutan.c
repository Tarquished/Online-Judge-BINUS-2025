#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n, m = 0;
typedef struct{
	int vokal;
	char nama[105];
}data;

int hitungVokal(char *kata){
	int len = strlen(kata);
	int count = 0;
	for (int i = 0; i < len; i++){
		if ((kata[i] == 'a') || (kata[i] == 'i') || (kata[i] == 'u') || (kata[i] == 'e') || (kata[i] == 'o')) count++;
	}
	return count;
}
int cmp(const void *a, const void *b){
	
	data *w1 = (data*)a;
	data *w2 = (data*)b;
	
	if (w1->vokal < w2->vokal) return -1;
	else if (w1->vokal > w2->vokal) return 1;
	else return strcmp(w1->nama, w2->nama);
}

data d[105];
int main(){
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		scanf("%s", d[i].nama);
		d[i].vokal = hitungVokal(d[i].nama);
	}
	qsort(d, n, sizeof(data), cmp);
	for (int i = 0; i < n; i++){
		printf("%s\n", d[i].nama);
	}
	
	
}
