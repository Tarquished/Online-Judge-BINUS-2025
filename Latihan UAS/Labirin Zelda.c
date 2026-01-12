#include <stdio.h>

int f(int n, int x, int y){
	if (n <= 1){
		return 1;
	}
	if (n > 1){
		return x+(f(n-1, x, y) + (y + (f((n-2), x, y))));
	}
}

int main(){
	int z;
	scanf("%d", &z);
	int n,x,y;
	
	for (int i = 0; i < z; i++){
		scanf("%d %d %d", &n, &x, &y);
		printf("Case #%d: %d\n", i+1, f(n,x,y));
	}
	
	
}
