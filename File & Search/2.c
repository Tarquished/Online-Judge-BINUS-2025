#include <string.h>
#include <stdio.h>


struct data{
	char depan[41], belakang[41], lengkap[41], target[41];
};


int main(){
	FILE *f = fopen("testdata.in", "r");
	int freq;
	fscanf(f, "%d", &freq);
	struct data d[freq];
	for (int i = 0; i < freq; i++){
		fscanf(f, " %[^\n]", d[i].lengkap);
		char *kata = strtok(d[i].lengkap, "#");
		strcpy(d[i].depan, kata);
		kata = strtok(NULL, "#");
		strcpy(d[i].belakang, kata);
	}
	int target;
	fscanf(f, "%d", &target);
	for (int j = 0; j < target; j++){
		fscanf(f, "%s", d[j].target);
	}
	
	for (int k = 0; k < target; k++){
		int index = 0;
		for (int l = 0; l < freq; l++){
			if (strcmp(d[k].target, d[l].depan) == 0){
				index = 1;
				printf("Case #%d: %s\n", k+1, d[l].belakang);
				break;
			}
			
		}
		if (index == 0) printf("Case #%d: N/A\n", k+1);
	}
	return 0;
}
