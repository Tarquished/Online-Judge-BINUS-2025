#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
	char nama[25];
	int point, playtime;
}dat;

int cmp(const void *a, const void *b){
	
	dat *char1 = (dat*)a;
	dat *char2 = (dat*)b;
	
	if (char1->point != char2->point) return char2->point - char1->point;
	if (char1->playtime != char2->playtime) return char1->playtime - char2->playtime;
	
	if (strcmp(char1->nama, char2->nama) > 0){
		return -1;
	}
	else if (strcmp(char1->nama, char2->nama) == 0){
		return 0;
	}
	else return 1;
}


int main(){
	int z;
	dat d[105];
	char kata[105];
	FILE *f = fopen("testdata5.in", "r");
	fscanf(f, "%d", &z);
	for (int i = 0; i < z; i++){
		fscanf(f, " %s", kata);
		char *token = strtok(kata, ";");
		strcpy(d[i].nama, token);
		token = strtok(NULL, ";");
		d[i].point = atoi(token);
		token = strtok(NULL, ";");
		d[i].playtime = atoi(token);
	}
	qsort(d, z, sizeof(dat), cmp);
	int test;
	char target[105];
	fscanf(f, "%d", &test);
	for (int j = 0; j < test; j++){
		fscanf(f, " %s", target);
		int ans = -1;
		for (int k = 0; k < z; k++){
			if (strcmp(d[k].nama, target) == 0){
				ans = k;
				break;
			}
		}
		if (ans != -1){
			printf("Case #%d: %d - %s (%d)\n", j+1, ans+1, d[ans].nama, d[ans].point);

		}
		else printf("Case #%d: N/A\n", j+1);
	}
	
}
