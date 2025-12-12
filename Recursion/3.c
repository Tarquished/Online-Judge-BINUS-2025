#include <stdio.h>

int N;
int A[105];


void calc(int index, int total){
	if (index > N) return;
	
	total = total + A[index];
	
	int kiri = index * 2;
	int kanan = index * 2 + 1;
	
	if (kiri > N && kanan > N){
		printf("%d\n", total);
		return;
	}
	
	if (kiri <= N) {
		calc(kiri, total);
	}
	
	if (kanan <= N) {
		calc(kanan, total);
	}
}

int main() {
	int T;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++){
		scanf("%d", &N);
		
		for (int j = 1; j <= N; j++){
			scanf("%d", &A[j]);
		}
		
		printf("Case #%d:\n", i+1);
		calc(1, 0);
		
		
		
	}
	
	
	return 0;
}

