#include <stdio.h>

int main(){
	int n,x,y;
	
	scanf("%d %d %d", &n, &x, &y);
	
	for (int i = 0; i < y/x; i++){
		n = n*2;
	}
	printf("%d\n", n);
}
