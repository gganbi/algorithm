//#include<stdio.h>
//
//int n, m;
//int data[110][110];
//int tmp[110][110];
//int t;
//int main() {
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &data[i][j]);
//		}
//	}
//
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
//
//	scanf_s("%d", &t);
//
//	for (int i = 1; i <= t; i++) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				for (int k = 0; k < 4; k++) {
//					int x = i + dx[k];
//					int y = j + dy[k];
//
//					if (data[x][y] != -1) {
//						tmp[x][y] += data[i][j];
//					}
//				}
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