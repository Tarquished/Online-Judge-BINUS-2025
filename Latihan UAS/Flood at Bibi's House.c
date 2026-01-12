#include <stdio.h>
#include <string.h>

int freq = 0;
char rumah[105][105];
int r,c;
void flood(int x, int y){
	
	if (x >= r || y >= c || x < 0 || y < 0){
		return;
	}
	
	if (rumah[x][y] == '.'){
		freq++;
	}
	
	if (rumah[x][y] == '#'){
		return;
	};
	
	rumah[x][y] = '#';
	
	flood(x+1, y);
	flood(x-1, y);
	flood(x, y+1);
	flood(x, y-1);
}


int main(){
	int z;
	scanf("%d", &z);
	for (int i =0 ; i < z; i++){
		scanf("%d %d", &r, &c);
		int xNow, yNow;
		for (int j = 0; j < r; j++){
			for (int k = 0; k < c; k++){
				scanf(" %c", &rumah[j][k]);
				if (rumah[j][k] == 'S'){
					xNow = j;
					yNow = k;
				}
			}
		}
		flood(xNow, yNow);
		
		printf("Case #%d: %d\n", i+1, freq);
		freq = 0;
	}
}
