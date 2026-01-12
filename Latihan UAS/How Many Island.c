#include <stdio.h>
int atas, bawah;
char map[105][105];
void flood(int a, int b){
	
	if (a >= atas || b >= bawah || a < 0 || b < 0){
		return;
	}
	if (map[a][b] == '#'){
		map[a][b] = '.';
		
		flood(a+1, b);
		flood(a-1, b);
		flood(a, b+1);
		flood(a, b-1);
	}
	return;
	
	
}

int main(){
	int count = 0;
	scanf("%d %d", &atas, &bawah);
	for (int i = 0; i < atas; i++){
		for (int j = 0; j < bawah; j++){
			scanf(" %c", &map[i][j]);
		}
	}
	for (int i = 0; i < atas; i++){
			for (int j = 0; j < bawah; j++){
			if (map[i][j] == '#'){
					count++;
					flood(i, j);
				}
			}
		}
	
	
	printf("%d\n", count);
	
}
