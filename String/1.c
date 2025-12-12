#include <stdio.h>
#include <string.h>
int main(){
	int T;
	
	scanf("%d", &T);
	char a[100001];
	for (int i = 0; i < T; i++){
		scanf("%s", a);
		
		
		int huruf[26] = {0};
		int distinct = 0;
		for (int j = 0; a[j] != '\0'; j++){
			
			int index = a[j] - 'a';
			
			if (huruf[index] == 0){
				huruf[index] = 1;
				distinct++;
			}
		}
		

		
		printf("Case #%d: ", i + 1);
		if (distinct%2 == 0){
			printf("Yay\n");
		}
		
		else {
			
			printf("Ewwww\n");
		}
		
		
	}
	return 0;	
}
