#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char id[105];
	char nama[105];
	int nilai[105];
}data;

int main(){
	int z;
	scanf("%d", &z);
	data d[105];
	for (int i = 0; i < z; i++){
		scanf("%s", d[i].id); getchar();
		scanf("%[^\n]", d[i].nama); getchar();
		for (int j = 0; j < 3; j++){
			scanf("%d", &d[i].nilai[j]);
		}
		
	}
	
	for (int k = 0; k < z; k++){
		int total = 0;
		for (int l = 0; l < 3; l++){
			
			total += d[k].nilai[l];
		}
		double hasil = (double)(total);
		if (hasil/3 >= 70){
			printf("%s %s\n", d[k].id, d[k].nama);
			printf("- Math: %d\n", d[k].nilai[0]);
			printf("- Science: %d\n", d[k].nilai[1]);
			printf("- English: %d\n", d[k].nilai[2]);
			printf("Average : %.2f\n", hasil/3);
			printf("-------------------\n");
		}
		
		
	}
}
