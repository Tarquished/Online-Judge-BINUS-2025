#include <stdio.h>

int main (){
	
	int x,y,k,t1,t2;
	
	scanf("%d %d %d", &x,&y,&k);

		t1 = k - x;
		t2 = y - k;
		
		if (t1 == t2 && t1 >= 0){
		printf("%d\n", t1);
		}

	
	else {
		printf("-1\n");
	}
	
	
	return (0);
}

