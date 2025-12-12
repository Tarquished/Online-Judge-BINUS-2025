#include <stdio.h>
long long N;
long long F(int x){
	
	if (x == 1){
		
		return 1;
	}
	if (x%2==1){
		return F(x-1) + F(x+1);
	}
	else {
		return F(x/2);
	}
	
	
}

int main() {
	int T;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		scanf("%lld", &N);
		
		long long hasil = F(N);
		printf("Case #%d: %lld\n", i+1, hasil);
	}
	return 0;
}
