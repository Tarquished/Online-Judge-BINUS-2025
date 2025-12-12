#include <stdio.h>
#include <stdbool.h>

#define SIZE 8
#define INF 1000

int dx[8] = {2, 2, -2, -2, 1, -1, 1, -1};
int dy[8] = {1, -1, 1, -1, 2, 2, -2, -2};

bool isValid(int x, int y) {
    return (x >= 1 && x <= SIZE && y >= 1 && y <= SIZE);
}

void findMinSteps(int x, int y, int destX, int destY, bool visited[9][9], int steps, int *minSteps) {
    if (steps >= *minSteps) return;

    if (x == destX && y == destY) {
        if (steps < *minSteps) {
		*minSteps = steps;	
		}
        return;
    }

    visited[x][y] = true;

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (isValid(nx, ny) && !visited[nx][ny]) {
            findMinSteps(nx, ny, destX, destY, visited, steps + 1, minSteps);
        }
    }

    visited[x][y] = false; // backtrack
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char start[3], end[3];
        scanf("%s %s", start, end);

        int x1 = start[0] - 'A' + 1;
        int y1 = start[1] - '0';
        int x2 = end[0] - 'A' + 1;
        int y2 = end[1] - '0';

        bool visited[9][9] = {false};
        int minSteps = INF;

        findMinSteps(x1, y1, x2, y2, visited, 0, &minSteps);

        printf("Case #%d: %d\n", t, minSteps);
    }

    return 0;
}
