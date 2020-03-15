#include <stdio.h>

int main() {
	int n, m;
	int data[101][101];

	int dx[4] = { 0,0,1,-1};
	int dy[4] = { 1,-1,0,0 };

	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%d", &data[i][j]);
		}
	}
	int y, x, d, r;

	scanf_s("%d %d %d %d", &y, &x, &d, &r);

	if (d == 0) {
		printf("%d",data[y][x+r] );
	
	}
	else if (d == 1) {
		printf("%d", data[y][x - r]);
	}
	else if (d == 2) {
		printf("%d", data[y+r][x]);
	}
	else {
		printf("%d", data[y-r][x + r]);
	}

	return 0;
}