#include <stdio.h>

int main (){
	
	int testCase,i,j,a,b,c,d,e,f;
	
	
	scanf("%d", &testCase);
	for (i = 1; i <= testCase; i++ ){
		
		scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
		
		printf("Case #%d: ", i);
		for (j = 0; j < a; j++){
			printf("a");
		}
		for (j = 0; j < b; j++){
			printf("s");
		}
		for (j = 0; j < c; j++){
			printf("h");
		}
		for (j = 0; j < d; j++){
			printf("i");
		}
		for (j = 0; j < e; j++){
			printf("a");
		}
		for (j = 0; j < f; j++){
			printf("p");
		}
		printf("\n");
		
		
	}
	return (0);
	
	

}

