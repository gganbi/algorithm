//#include<stdio.h>
//int n, m;
//int data[200][200];
//int q;
//
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//int x=1, y=1;
//
//
//void move(int d,int r) {
//
//	if (d == 0) { //오른
//		for (int i = 1; i <= r; i++) {		
//			if (data[x+dx[0]][y+dy[0]] != -1) {
//				x += dx[0];
//				y += dy[0];
//			}
//			else {
//				break;
//			}
//		}
//	}
//	else if (d == 1) {//왼
//		for (int i = 1; i <= r; i++) {
//			if (data[x + dx[1]][y + dy[1]] != -1) {
//				x += dx[1];
//				y += dy[1];
//			}
//			else {
//				break;
//			}
//		}
//	
//	}
//	else if (d == 2) { //아래
//		for (int i = 1; i <= r; i++) {
//			if (data[x + dx[2]][y + dy[2]] != -1) {
//				x += dx[2];
//				y += dy[2];
//			}
//			else {
//				break;
//			}
//		}
//	
//	}
//	else {//위
//		for (int i = 1; i <= r; i++) {
//			if (data[x + dx[3]][y + dy[3]] != -1) {
//				x += dx[3];
//				y += dy[3];
//			}
//			else {
//				break;
//			}
//		}
//	}
//
//}
//
//
//int main() {
//	
//	scanf_s("%d %d %d", &n, &m, &q);
//
//	for (int i = 0; i <= n + 1; i++) {
//	
//		data[i][0] = -1;
//		data[i][m + 1] = -1;
//	}
//
//	for (int i = 0; i <= m + 1; i++) {
//		data[0][i] = -1;
//		data[n+1][i] = -1;
//	}
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &data[i][j]);
//		}
//	}
//
//	/*for (int i = 0; i <= n+1; i++) {
//		for (int j = 0; j <= m+1; j++) {
//			printf("%d ", data[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	for (int i = 1; i <= q; i++) {
//		int d, r;
//		scanf_s("%d %d", &d, &r);
//		move(d,r);
//		printf("%d\n", data[x][y]);
//	}
//
//
//
//}