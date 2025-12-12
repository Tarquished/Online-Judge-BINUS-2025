#include <stdio.h>

long long int fpb(long long int a, long long int b){
	long long int temp;
	while (b != 0){ 
		temp = b;
		b = a%b;
		a = temp;
		
	}
	return a;
	
	
}

int main () {
	int T;
	long long int total, first, num2;
	scanf("%d", &T);
	for (int i = 0; i<T; i++){
		scanf("%lld", &total);
		
		scanf("%lld", &first);
		for (int j = 1; j<total; j++){
			scanf("%lld", &num2);
			
			first = fpb(first, num2);
			
		}
		
		printf("Case #%d: %lld\n", i+1, first);
	}
}
