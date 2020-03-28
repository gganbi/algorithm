//#include<stdio.h>
//#include<stdlib.h>
//
//int n, m;
//int k;
//int data[110][110];
//int tmp[110][110];
//int t;
//int main() {
//	scanf_s("%d %d", &n, &m);
//	scanf_s("%d", &k);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &data[i][j]);
//		}
//	}
//	int dx[4] = { -1,1,0,0 };
//	int dy[4] = { 0 ,0,-1, 1 };
//
//	for (int i = 0; i <= n + 1; i++) {
//		data[i][0] = -1;
//		data[i][m + 1] = -1;
//	}
//	for (int i = 0; i <= m + 1; i++) {
//		data[0][i] = -1;
//		data[n + 1][i] = -1;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			tmp[i][j] = data[i][j];
//		}
//	}
//
//	scanf_s("%d", &t);
//
//	for (int ii = 1; ii <= t; ii++) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//
//				int x1 = i - k;
//				if (x1 < 1) {
//					x1 = 1;
//				}
//				int x2 = i + k;
//				if (x2 > n) {
//					x2 = n;
//				}
//				int y1 = j - k;
//
//				if (y1 < 1) {
//					y1 = 1;
//				}
//				int y2 = j + k;
//				if (y2 > m) {
//					y2 = m;
//				}
//
//				for (int mm = x1; mm <= x2; mm++) {
//					for (int nn = y1; nn <= y2; nn++) {
//						if (abs(i - mm) + abs(j - nn) >= 1 && abs(i - mm) + abs(j - nn) <= k) {
//							tmp[mm][nn] += data[i][j];
//						}
//					}
//				}
//
//			}
//		}
//
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				data[i][j] = tmp[i][j];
//			}
//		}
//	}
//
//
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d ", tmp[i][j]);
//		}printf("\n");
//	}
//}