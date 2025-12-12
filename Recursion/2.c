#include <stdio.h>
#include <string.h>


void balik (char kata[], int index){
	
	if (index == -1) {
		return;
	}
	
	printf("%c", kata[index]);
	balik(kata, index-1);
	
}


int main () {
	int T;
	
	scanf("%d", &T);
	getchar();
	
	for (int i = 0; i < T; i++){
		char word[1001];
		
		fgets(word, sizeof(word), stdin);
		word[strcspn(word, "\n")] = 0;
		int panjang = strlen(word);
		
		printf("Case #%d: ", i+1);
		balik(word, panjang-1);
		printf("\n");
		
	}
	return 0;
}
