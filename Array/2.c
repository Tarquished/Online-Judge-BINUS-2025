#include <stdio.h>

int main() {
	int n,m,q,T;
	
	scanf("%d", &T);
	
	for (int i=1; i <=T; i++) {
		
		int pola[50][50];
		int lampu [50] = {0};
		int teman [50];
		int id[50];
		
		scanf("%d %d %d", &n, &m, &q);
		
		for (int j = 0; j < n; j++){
			for (int k = 0; k < m; k++){
				scanf("%d", &pola[j][k]);
			}
		}
		
		for (int l = 0; l < q; l++){
			scanf("%d", &teman[l]);
		}
		
		for (int z = 0; z < q; z++){	
			int id = teman[z] - 1;
			for (int g = 0; g < m; g++){
			if (pola[id][g] == 1){
				lampu[g] =lampu[g]^1;
			}	
			}
			
			
		}
	
			printf("Case #%d:\n", i);
			for (int x = 0; x < m; x++){
			
			if (lampu[x] == 1){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		
		
	}
	
	return 0;
}
