#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++){
		int a;
		scanf("%d", &a);
		for (int j = 1; j<=a; j++){
			for (int k = 0; k < a-j; k++){
				printf(" ");
			}
			for (int s = 0; s < j*2 - 1; s++){
				printf("*");
				
			}
			printf("\n");
			
			
			
			
		}
		
		
	}
	
	
}
