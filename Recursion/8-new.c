#include <stdio.h>
#include <stdbool.h>


int gerakx[8] = {2, 2, -2, -2, 1, -1, 1, -1}; 
int geraky[8] = {1, -1, 1, -1, 2, -2, 2, -2};

bool masihdalamkotak(int x, int y){
	return (x>= 1 && x <= 8 && y >= 1 && y <= 8);
} 


void cariStep(int x, int y, int tujuanX, int tujuanY, bool visited[9][9], int steps, int *stepMinimal){
	if (steps >= *stepMinimal){
		return;
	}
	
	if (x == tujuanX && y == tujuanY){
		if (steps < *stepMinimal) {
			*stepMinimal = steps;
		} return;
	}
	
	visited [x][y] = true;
	
	for (int i = 0; i < 8; i++){
		int nx = x + gerakx[i];
		int ny = y + geraky[i];
		
		if (masihdalamkotak(nx, ny) && !visited[nx][ny]){
			cariStep(nx, ny, tujuanX, tujuanY, visited, steps + 1, stepMinimal);
		}
	}
	
	visited [x][y] = false;
}


int main() {
	int T;
	
	scanf("%d", &T);
	for (int i=0; i < T; i++){
		char start[3], end[3];
		
		scanf("%s %s", start, end);
		
		int x1 = start[0] - 'A' + 1;
		int x2 = end[0] - 'A' + 1;
		int y1 = start[1] - '0';
		int y2 = end[1] - '0';
		
		bool visited [9][9] = {false};
		
		int minSteps = 999;
		
		cariStep(x1, y1, x2, y2, visited, 0, &minSteps);
		
		printf("Case #%d: %d\n", i+1, minSteps);
	}
	
	return 0;
}
