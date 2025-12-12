#include <stdio.h>

int tambah(int arr[], int x) {
	int n;

	if (x == 0){
		return 0;
	}
	
	return arr[x-1] + tambah(arr, x-1);
	
}


int main() {
	
	int T;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++){
		int N[10001];
		int a;
		scanf("%d", &a);
		for (int j = 0; j < a; j++){
			scanf("%d", &N[j]);
			
		}
		int hasil = tambah(N, a);
		printf("Case #%d: %d\n", i+1, hasil);
		
	}
	return 0;
}
