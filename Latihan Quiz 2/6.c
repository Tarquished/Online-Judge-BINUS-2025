#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char type[105];
	long long int power;
	
}data;

int cmp (const void *a, const void *b){
	data *a1 = (data*)a;
	data *a2 = (data*)b;
	
	if (a1->power != a2->power) return a2->power - a1->power;
	return (strcmp(a1->type, a2->type)); 
}

int main(){
	FILE *f = fopen("testdata6.in", "r");
	data d[105];
	int z;
	fscanf(f, "%d", &z);
	char kata[105];
	for (int i = 0; i < z; i++){
		fscanf(f, " %s", kata);
		char *word = strtok(kata, "#");
		strcpy(d[i].type, word);
		word = strtok(NULL, "#");
		d[i].power = atoi(word);
	}
	qsort(d, z, sizeof(data), cmp);
	for (int j = 0; j < z; j++){
		printf("%s - Power: %lld\n", d[j].type, d[j].power);
	}
	
	
	
}
