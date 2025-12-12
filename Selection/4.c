#include <stdio.h>

int main (){
	
	int testCase;
	
	
	scanf("%d", &testCase);
	for (int i = 1; i <= testCase; i++ ){
		long long int a,b,c,hasil;
		
		scanf("%lld %lld %lld", &a, &b, &c);
		printf("Case #%d: ", i);
		hasil = a*b/100;
		if (hasil > c) {
			printf("%d\n", c);
		}
		else {
			printf("%d\n", hasil);
		}

		
	}
	return (0);
	
	

}

