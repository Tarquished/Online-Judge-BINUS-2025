#include <stdio.h>
#include <string.h>

struct data{
	char mahasiswa[101], nim[101], mhstarget[101];
	int freq, target;
};

int main(){
	struct data d[101];
	FILE *f = fopen("testdata.in", "r");
	
	fscanf(f, "%d", &d[0].freq);
	for (int i = 0; i < d[0].freq; i++){
		fscanf(f, "%s %s", d[i].nim, d[i].mahasiswa);
	}
	fscanf(f, "%d", &d[0].target);
	for (int j = 0; j < d[0].target; j++){
		fscanf(f, "%s", d[j].mhstarget);
	}
	for (int k = 0; k < d[0].target; k++){
		int index = 0;
		for (int l = 0; l < d[0].freq; l++){
			if (strcmp(d[k].mhstarget, d[l].nim) == 0){
				printf("Case #%d: %s\n", k+1, d[l].mahasiswa);
				index = 1;
				break;
			}
		}
		if (index == 0) printf("Case #%d: N/A\n", k+1);
	}
}
