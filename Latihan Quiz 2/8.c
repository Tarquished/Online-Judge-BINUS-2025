#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nama[25], phone[25];
}data;

int cmp(const void *a, const void *b){
	data *g = (data*)a;
	data *h = (data*)b;
	
	return (strcmp(g->nama, h->nama));
	
}

int main(){
	FILE *f = fopen("testdata8.in", "r");
	data d[105];
	int z;
	char kata[105];
	fscanf(f, "%d", &z);
	for (int i = 0; i < z; i++){
		fscanf(f, " %s", kata);
		char *token = strtok(kata, "#");
		strcpy(d[i].nama, token);
		token = strtok(NULL, "#");
		strcpy(d[i].phone, token);
	}
	qsort(d, z, sizeof(data), cmp);
	int test;
	fscanf(f, "%d", &test);
	char target[105];
	for (int j = 0; j< test; j++){
		fscanf(f, " %s", target);
		int ans = -1;
		int kiri = 0, kanan = z-1;
		while (kiri <= kanan){
			int mid = kiri + (kanan-kiri)/2;
			if (strcmp(d[mid].nama, target) == 0){
				ans = mid;
				break;
			}
			else if (strcmp(d[mid].nama, target) < 0) kiri = mid+1;
			else kanan = mid-1;
		}
		if (ans != -1){
			printf("Case #%d: %s\n", j+1, d[ans].phone);
		}
		else printf("Case #%d: Not Found\n", j+1);
		
		
	}
	
	
	
}
