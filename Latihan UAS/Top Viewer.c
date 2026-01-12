#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
	char title[1005], artist[1005];
	long long view;
	
}data;

int cmp1(const void *a, const void *b){
	data *q = (data*)a;
	data *w = (data*)b;
	
	if (q->view < w->view) return 1;
	else if (q->view > w->view) return -1;
	else return strcmp(q->title, w->title);
}
int main(){
	char kata[3005];
	FILE *f = fopen("testdata6.in", "r");
	long long  i = 0;
	data d[1005];
	while (fscanf(f, " %[^\n]", kata) != EOF){
		char *token = strtok(kata, "#");
		strcpy(d[i].title, token);
		token = strtok(NULL, "#");
		strcpy(d[i].artist, token);
		token = strtok(NULL, "#");
		d[i].view = atoll(token); 
		i++;
	}
	qsort(d, i, sizeof(data), cmp1);
	for (int a = 0; a < i; a++){
		printf("%s by %s - %lld\n", d[a].title, d[a].artist, d[a].view);
	}
	
	
}
