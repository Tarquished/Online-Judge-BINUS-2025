#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int cmp(const void *a, const void *b){
	char q= *(char*)a;
	char w= *(char*)b;
	
	char upperQ = toupper(q);
	char upperW = toupper(w);
	
	if (upperQ != upperW) return upperQ - upperW;
	return q-w;
}
char kata[10000005];
int main(){
	scanf("%s", kata);
	long long int len = strlen(kata);
	
	qsort(kata, len, sizeof(char), cmp);
	printf("%s\n", kata);
}
