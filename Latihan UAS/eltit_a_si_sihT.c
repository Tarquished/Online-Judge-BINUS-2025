#include <stdio.h>
#include <string.h>

char newword[1005];
void reverse(char *kalimat, int akhir, int awal){
	if (akhir >= 0){
		newword[awal] = kalimat[akhir];
		reverse(kalimat, akhir-1, awal+1);
	}
	if (akhir < 0){
		newword[awal] =	'\0';
	}
}

int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		char kata[1005];
		scanf(" %[^\n]", kata);
		int len = strlen(kata)-1;
		reverse(kata, len, 0);
		printf("Case #%d: %s\n", i+1, newword);
	}
	
}
