#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	return *(int*)a - *(int*)b;
}

int main(){
	FILE *f = fopen("testdata.in", "r");
	int z;
	fscanf(f, "%d", &z);
	for (int i = 0; i < z; i++){
		int n,m;
		fscanf(f, "%d %d", &n, &m);
		int total = n*m;
		int angka[total];
		for (int j = 0; j <total; j++){
			fscanf(f, "%d", &angka[j]);
		}
		qsort(angka, total, sizeof(int), cmp);
		double med;
		if (total%2 == 0){
			med = (angka[total/2-1] + angka[total/2]) / 2.0;
		}
		else if (total%2==1){
			med = angka[total/2];
		}
		
		int ans = (int)(med+0.5);

		printf("Case #%d: %d\n", i+1, ans);

	}
	fclose(f);
	
}
