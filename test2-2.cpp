//#include<stdio.h>
//int n, m;
//int k, t;
//int data[200][200] = { 0, };
//int q;
//
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//
//
//
//void move(int x, int y, int d, int r, int t) {
//
//	for (int ii = 1; ii <= t; ii++) {
//		if (d == 3) { //오른
//			for (int i = 1; i <= r; i++) {
//				if (data[x + dx[0]][y + dy[0]] != -1) {
//					x += dx[0];
//					y += dy[0];
//				}
//				else {
//					break;
//				}
//			}
//		}
//		else if (d == 2) {//왼
//			for (int i = 1; i <= r; i++) {
//				if (data[x + dx[1]][y + dy[1]] != -1) {
//					x += dx[1];
//					y += dy[1];
//				}
//				else {
//					break;
//				}
//			}
//
//		}
//		else if (d == 1) { //아래
//			for (int i = 1; i <= r; i++) {
//				if (data[x + dx[2]][y + dy[2]] != -1) {
//					x += dx[2];
//					y += dy[2];
//				}
//				else {
//					break;
//				}
//			}
//
//		}
//		else if (d == 0) {//위
//			for (int i = 1; i <= r; i++) {
//				if (data[x + dx[3]][y + dy[3]] != -1) {
//					x += dx[3];
//					y += dy[3];
//				}
//				else {
//					break;
//				}
//			}
//		}
//
//	}
//
//	printf("%d %d \n", x, y);
//
//}
//
//
//int main() {
//
//	scanf_s("%d %d %d %d", &n, &m, &k, &t);
//
//	for (int i = 0; i <= n + 1; i++) {
//
//		data[i][0] = -1;
//		data[i][m + 1] = -1;
//	}
//
//	for (int i = 0; i <= m + 1; i++) {
//		data[0][i] = -1;
//		data[n + 1][i] = -1;
//	}
//
//
//	for (int i = 1; i <= k; i++) {
//		int x, y, d, r;
//		scanf_s("%d %d %d %d", &x, &y, &d, &r);
//		move(x, y, d, r, t);
//
//	}
//
//
//
//}