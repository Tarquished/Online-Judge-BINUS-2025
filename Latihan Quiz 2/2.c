#include <stdio.h>
#include <string.h>

int palindrome(char *kata, int start, int end){
	if (start >= end){
		return 1;
	}
	if (kata[start] == kata[end]){
		return palindrome(kata, start+1, end-1);
	}
	else return -1;
	
}

int main(){
	FILE *f = fopen("testdata2.in", "r");
	int z;
	char kata[105];
	fscanf(f, "%d", &z);
	for (int i = 0; i < z; i++){
		fscanf(f, " %s", kata);
		if (palindrome(kata, 0, strlen(kata)-1) == 1){
			printf("Case #%d: YES\n", i+1);
		}
		else printf("Case #%d: NO\n", i+1);
	}
}
