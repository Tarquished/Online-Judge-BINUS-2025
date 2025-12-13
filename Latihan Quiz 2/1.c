#include <stdio.h>
#include <string.h>

struct data{
	char title[105], author[105], ISBN[105];
}d;
void swap(struct data *a, struct data *b){
	struct data temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int n, struct data *kata){
	int idx = 0;
	for (int i = 0; i < n-1; i++){
		idx = i;
		for (int j = i+1; j< n; j++){
			if (strcmp(kata[j].title, kata[idx].title) < 0 ) idx = j;
		}
		swap(&kata[idx], &kata[i]);
	}
}

int main(){
	FILE *f = fopen("testdata1.in", "r");
	struct data d[1005];
	int z;
	char kata[105];
	fscanf(f, "%d", &z);
	for (int i = 0; i < z; i++){
		fscanf(f, " %[^\n]", kata);
		char *token = strtok(kata, "#");
		strcpy(d[i].ISBN, token);
		token = strtok(NULL, "#");
		strcpy(d[i].title, token);
		token = strtok(NULL, "#");
		strcpy(d[i].author, token);
	}
	int test;
	sort(z, d);
	fscanf(f, "%d", &test);
	for (int j = 0; j < test; j++){
		char word[105];
		int ans = -1;
		fscanf(f, " %[^\n]", word);
		
		// Binary Searching
		int kiri = 0, kanan = z-1;
		while (kiri <= kanan){
			int mid = kiri + (kanan - kiri)/2;
			if (strcmp(d[mid].title, word) == 0) {
				ans = mid;
				break;
			}
			else if (strcmp(d[mid].title, word) < 0) kiri = mid+1;
			else kanan= mid-1;
		}
		
		
		if (ans != -1){
			printf("Case #%d: %s - %s\n", j+1, d[ans].ISBN, d[ans].author);
		}
		else printf("Case #%d: N/A - N/A\n", j+1);
	}
	
}
