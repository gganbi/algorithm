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
//int lastMin = 300;
//
//int cnt = 0;
//
//int cnt2 = 0;
//
//int dfusulCnt = 0;
//
//int bfs(int i,int j) {
//
//	queue<dataset> Que;
//
//	dataset tmp;
//	tmp.x = i;
//	tmp.y = j;
//	tmp.cnt = 0;
//	Que.push(tmp);
//
//
//	while (!Que.empty()) {
//
//
//		dataset cur = Que.front();
//		Que.pop();
//
//		for (int ii = 0; ii < 4; ii++) {
//			int x = cur.x + dx[ii];
//			int y = cur.y + dy[ii];
//
//			if (x <= n && y <= m) {
//				if (dataa[x][y] != 400) { //기둥,벽
//
//
//					int tmp = dataa[x][y];
//
//					if (dataa[x][y] == 0) {
//						dataa[x][y] = cur.cnt + 1;
//					}
//					else  if (dataa[x][y] != 0 && dataa[x][y] <= cur.cnt + 1) {
//					
//					}
//					else {
//						dataa[x][y] = cur.cnt + 1;
//					}
//
//					if (dataa[x][y] == 0 || dataa[x][y]==2000) {
//						dataa[x][y] = cur.cnt + 1;
//					}
//					else {
//						
//						if (dataa[x][y] > cur.cnt + 1) {
//							dataa[x][y] = cur.cnt + 1;
//						}
//					
//					}
//
//
//				   
//					dataset next;
//					next.x = x;
//					next.y = y;
//					next.cnt = cur.cnt + 1;
//					Que.push(next);
//
//					int cnt3 = 0;
//					for (int i = 1; i <= n; i++) {
//						for (int j = 1; j <= m; j++) {
//							if (dataa[i][j] !=400) {
//								cnt3++;
//							}
//						}
//					}
//
//					if (cnt == cnt3- dfusulCnt) {
//						//printf("%d", next.cnt);
//						return next.cnt;
//					}
//				}
//			}
//		}
//
//		cnt2 = 0;
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				if (dataa[i][j] != 400) {
//					cnt2++;
//				}
//			}
//		}
//
//
//	}
//
//	if (cnt2- dfusulCnt != cnt) {
//
//	//	printf("-1");
//		return -1;
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
//			else if (dataa[i][j] == 1) { //기둥
//				dataa[i][j] = 400;
//				cnt5++;
//			}
//			else if (dataa[i][j] == 2) { //디뷰처
//				dataa[i][j] = 2000;
//				cnt5++;
//			}
//			else {
//				cnt5++;
//			}
//		
//		}
//	}
//
//	for (int i = 0; i <= n + 1; i++) {
//		dataa[i][0] = 400;
//		dataa[i][m + 1] = 400;
//	}
//	for (int i = 0; i <= m + 1; i++) {
//		dataa[0][i] = 400;
//		dataa[n + 1][i] = 400;
//
//	}
//
//	for (int i = 0; i <= n+1; i++) {
//		for (int j = 0; j <= m+1; j++) {
//			test[i][j] = dataa[i][j];
//		}
//	}
//
//	if (cnt5 == n * m) {  // 0이 하나도 없는케이스일경우는 끝
//		printf("0");
//	}
//	else {
//
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				if (dataa[i][j] == 2000) {
//					dfusulCnt++; //디퓨저갯수
//				}
//			}
//		}
//
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				if (dataa[i][j] == 2000) {
//					
//					int value=bfs(i,j);
//
//					printf("aaaaaa: %d   \n", value);
//
//					for (int ii = 1; ii <= n; ii++) {
//						for (int jj = 1; jj <= m; jj++) {
//
//							
//							printf("%d ", dataa[ii][jj]);
//						
//							
//						}printf("\n");
//					}
//					printf("\n");
//					if (value != -1) {
//						if (lastMin >= value) {
//							lastMin = value;
//						}
//					}
//
//					for (int i = 0; i <= n + 1; i++) {
//						for (int j = 0; j <= m + 1; j++) {
//							dataa[i][j] = test[i][j];
//						}
//					}
//				}
//			}
//		}
//		
//	}
//	
//
//	if (lastMin == 300) {
//		printf("-1");
//	}
//	else {
//		printf("%d", lastMin);
//	}
//
//
//
//}