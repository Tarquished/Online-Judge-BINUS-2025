#include <stdio.h>

int main(){
	int T,N; 
	
	scanf("%d", &T);
	for (int i = 1; i <= T; i++ ){
	scanf("%d", &N);
	
	int matriks1[N][N];
	int matriks2[N][N];
	int matriks3[N][N];
	int temp[N][N];
	int hasil[N][N];
	
	for (int j = 0; j < N; j++){
		for (int k = 0; k < N; k++)
		scanf("%d", &matriks1[j][k]);
	}
	for (int j = 0; j < N; j++){
		for (int k = 0; k < N; k++)
		scanf("%d", &matriks2[j][k]);
	}
	for (int j = 0; j < N; j++){
		for (int k = 0; k < N; k++)
		scanf("%d", &matriks3[j][k]);
	}
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			temp[i][j] = 0;
			for (int k = 0; k < N; k++){
				temp[i][j] += matriks1[i][k] * matriks2[k][j];
			}
		}
	}
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			hasil[i][j] = 0;
			for (int k = 0; k < N; k++){
				hasil[i][j] += temp[i][k] * matriks3[k][j];
			}
		}
	}
	
		
		printf("Case #%d:\n", i);
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				if (j > 0) printf(" ");
				printf("%d", hasil[i][j]);
			}
			printf("\n");
		}
		
	}
	return 0;
}
