#include <stdio.h>
int targetX, targetY;
int board[8][8];
int minstep = 1000;
void cariJalan(int x, int y, int step){
	if (x > 7 || y > 7 || x < 0 || y < 0){
		return;
	}
	
	if (step > 6) return;
	
	board[x][y] = step;
	if (x == targetX && y == targetY){
		if (step < minstep) minstep = step;
		return;
	}
	
	cariJalan(x + 2, y + 1, step+1);
	cariJalan(x + 2, y - 1, step+1);
	cariJalan(x + 1, y + 2, step+1);
	cariJalan(x + 1, y - 2, step+1);
	cariJalan(x - 1, y + 2, step+1);
	cariJalan(x - 2, y - 1, step+1);
	cariJalan(x - 2, y + 1, step+1);
}


int main(){
	int z;
	int r1, r2;
	char c1, c2;
	scanf("%d", &z);
	for (int i =0; i < z;i++){
		scanf(" %c%d %c%d", &c1, &r1, &c2, &r2);
		int xAwal = c1 - 'A';
		int YAwal = r1 - 1;
		targetX = c2 - 'A';
		targetY = r2 - 1;
		
		for (int j = 0; j < 8; j++){
			for (int k =0; k < 8; k++){
				board[j][k] = 100;
			}
		}
		minstep = 1000;
		cariJalan(xAwal, YAwal, 0);
		printf("Case #%d: %d\n", i+1, minstep);
	}
	
	
}
