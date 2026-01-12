#include <stdio.h>
int freq = 0;

int F(int n){
	if (n == 0){
		return 1;
	}
	if (n == 1){
		return 2;
	}
	if (n%3 == 0){
			freq++;
		}
	if (n%5 == 0){
		return n*2;
	}
	return F(n-1) + n + F(n-2) + n-2;
 	
}


int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		int a;
		scanf("%d", &a);
		int result = F(a);
		printf("Case #%d: %d %d\n", i+1, result, freq);
		freq = 0;
		
	}
	
	
}
