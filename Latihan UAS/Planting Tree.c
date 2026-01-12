#include <stdio.h>
#include <string.h>

struct data{
    char name[105];
    char tanaman[105];
}; struct data list[105];

int main(){
    FILE *p = fopen("testdata7.in", "r");
    int N;
    int T;
    char nameSearch[105];
    fscanf(p, "%d", &N);
	for (int i = 0; i < N; i++){
        fscanf(p, " %[^#]#%[^\n]", list[i].name, list[i].tanaman);
    }
    fscanf(p, "%d", &T);
    for(int i = 0; i < T; i++){
   		fscanf(p, " %s", nameSearch);
    	printf("Case #%d: ", i+1);
    	int found = 0;
        for (int j = 0; j < N; j++){
            if(strcmp(nameSearch, list[j].name) == 0){
            	found = 1;
            	printf("%s\n", list[j].tanaman);
           		break;
            }
        }
        if (!found) printf("N/A\n");
       }
	fclose(p);
    return 0;
}
