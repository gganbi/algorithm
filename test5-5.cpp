//#include <cstdio>
//#include<queue>
//
//using namespace std;
//
//
//int n, m;
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int dataa[120][120];
//int test[120][120];
//
//
//struct dataset {
//
//	int x;
//	int y;
//	int cnt;
//};
//
//
//
//int cnt = 0;
//
//int cnt2 = 0;
//
//void bfs() {
//
//	queue<dataset> Que;
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (dataa[i][j] == 2) {
//				//	dataa[i][j] = 3;
//				dataset tmp;
//				tmp.x = i;
//				tmp.y = j;
//				tmp.cnt = 0;
//				Que.push(tmp);
//			}
//		}
//	}
//
//	while (!Que.empty()) {
//
//
//		dataset cur = Que.front();
//		Que.pop();
//
//		int cnt3 = 0;
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				if (dataa[i][j] == 0) {
//					cnt3++;
//				}
//			}
//		}
//
//		for (int ii = 0; ii < 4; ii++) {
//			int x = cur.x + dx[ii];
//			int y = cur.y + dy[ii];
//
//			if (x <= n && y <= m) {
//
//				if (dataa[x][y] == 0) {
//					/*	printf("111 \n");
//						for (int i = 1; i <= n; i++) {
//							for (int j = 1; j <= m; j++) {
//								printf("%d ", dataa[i][j]);
//							}printf("\n");
//						}*/
//					for (int i = 1; i <= n; i++) {
//						for (int j = 1; j <= m; j++) {
//							test[i][j] = dataa[i][j];
//						}
//					}
//					dataa[x][y] = 3;
//					dataset next;
//					next.x = x;
//					next.y = y;
//					next.cnt = cur.cnt + 1;
//					Que.push(next);
//
//					int cnt3 = 0;
//					for (int i = 1; i <= n; i++) {
//						for (int j = 1; j <= m; j++) {
//							if (dataa[i][j] == 3) {
//								cnt3++;
//							}
//						}
//					}
//
//					if (cnt == cnt3) {
//						printf("%d", next.cnt);
//						return;
//					}
//				}
//			}
//		}
//
//		cnt2 = 0;
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				if (dataa[i][j] == 3) {
//					cnt2++;
//				}
//			}
//		}
//
//
//	}
//
//	if (cnt2 != cnt) {
//
//		printf("-1");
//		return;
//	}
//
//
//
//
//}
//
//
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	int cnt5 = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//			if (dataa[i][j] == 0) {
//				cnt++;
//			}
//			else {
//				cnt5++;
//			}
//		}
//	}
//
//	for (int i = 0; i <= n + 1; i++) {
//		dataa[i][0] = 100;
//		dataa[i][m + 1] = 100;
//	}
//	for (int i = 0; i <= m + 1; i++) {
//		dataa[0][i] = 100;
//		dataa[n + 1][i] = 100;
//
//	}
//
//	if (cnt5 == n * m) {
//		printf("0");
//	}
//	else {
//		bfs();
//	}
//	
//
//
//
//}