#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a, const void *b){
	
	char *q = (char*)a;
	char *w = (char*)b;
	return *q-*w;
	
}

int main(){
	int z;
	
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		char kata[1005];
		scanf(" %s", kata);
		char U[1005];
		scanf(" %s", U);
		char newword[1005];
		qsort(kata, strlen(kata), sizeof(char), cmp);
		qsort(U, strlen(U), sizeof(char), cmp);
		int l = 0;
		for (int k = 0; k < strlen(U); k++){
			for (int j = 0; j < strlen(kata); j++){
				if (kata[j] == U[k]){
					newword[l] = kata[j];
					l++;
				}
			}
		}
		newword[l] = '\0';
		printf("Case #%d: %s\n", i+1, newword);
	}
	
	
}
