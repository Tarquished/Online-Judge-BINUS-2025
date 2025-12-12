#include <stdio.h>

int N, M;
char rumah[101][101];
int count;

void banjir(int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= M) return;
    if (rumah[x][y] != '.' && rumah[x][y] != 'S') return;
	if (rumah[x][y] == '.'){
    	count++;
	}
    rumah[x][y] = '#';
    
    
    

    banjir(x + 1, y);
    banjir(x - 1, y);
    banjir(x, y + 1);
    banjir(x, y - 1);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &N, &M);
        getchar();

        int startX, startY;
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                scanf("%c", &rumah[j][k]);
                if (rumah[j][k] == 'S') {
                    startX = j; // baris
                    startY = k; // kolom
                }
            }
            getchar();
        }

        count = 0;
        banjir(startX, startY);
        printf("Case #%d: %d\n", i + 1, count);
    }

    return 0;
}

