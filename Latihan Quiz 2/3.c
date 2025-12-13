#include <stdio.h>
int j = 0;
int count(int n){
	
	if (n == 1) {
		return j;
	}
	if (n%2 == 0){
		j++;
		return count(n/2);
	}
	else {
		j++;
		return count(n*3+1);
	}
}

int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		int g;
		scanf("%d", &g);
		printf("Case #%d: %d\n", i+1, count(g));
		j = 0;
	}
}
