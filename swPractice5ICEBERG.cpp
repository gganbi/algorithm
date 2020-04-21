//#include<cstdio>
//#include<queue>
//#include<string.h>
//using namespace std;
//
//int dataa[500][500];
//int dataa2[500][500];
//bool check[500][500] = { false, };
//int n, m;
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//struct DD {
//	int x;
//	int y;
//	int cnt;
//};
//
//
//int lastCnt = 0;
//
//int bfs(int x, int y) {
//	queue<DD> Que;
//	int cnt = 1;
//	DD dd;
//	dd.x = x;
//	dd.y = y;
//	Que.push(dd);
//
//
//
//	dataa2[x][y] = 0;
//
//
//	while (!Que.empty()) {
//
//		DD current = Que.front();
//		Que.pop();
//
//		for (int i = 0; i < 4; i++) {
//
//			int xx = current.x + dx[i];
//			int yy = current.y + dy[i];
//
//			if (dataa2[xx][yy] != 0) {
//				cnt++;
//				dataa2[xx][yy] = 0;
//				DD temp;
//				temp.x = xx;
//				temp.y = yy;
//				Que.push(temp);
//			}
//		}
//	}
//
//	return cnt;
//
//}
//
//bool zero = false;
//
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//			dataa2[i][j] = dataa[i][j];
//		}
//	}
//
//	for (int i = 0; i <= m+1; i++) {
//		dataa[0][i] = -1;
//		dataa[n + 1][i] = -1;
//	}
//
//	for (int i = 0; i <= n + 1; i++) {
//		dataa[i][0] = -1;
//		dataa[i][m+1] = -1;
//	}
//	
//
//
//	//여서부터 와일
//
//	int lastCnt = 0;
//
//	while (true) {
//
//		lastCnt++;
//		
//		for (int i = 0; i <= n + 1; i++) {
//			for (int j = 0; j <= m + 1; j++) {
//				dataa2[i][j] = dataa[i][j];
//			}
//		}
//
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//
//				int tmpCnt = 0;
//
//				if (dataa[i][j] != 0) {
//					for (int m = 0; m < 4; m++) {
//						int x = i + dx[m];
//						int y = j + dy[m];
//
//						if (dataa[x][y] == 0) {
//							tmpCnt++;
//						}
//					}
//					dataa2[i][j] -= tmpCnt;
//
//					if (dataa2[i][j] < 0) {
//						dataa2[i][j] = 0;
//					}
//				}
//			}
//		}
//
//
//		int sum = 0;
//
//		for (int i = 0; i <= n + 1; i++) {
//			for (int j = 0; j <= m + 1; j++) {
//				dataa[i][j] = dataa2[i][j];
//				if (dataa2[i][j] != 0 && dataa2[i][j] != -1) {
//					sum++;
//				}
//			}
//		}
//
//		int sum2 = 0;
//
//		for (int i = 0; i <= n + 1; i++) {
//			for (int j = 0; j <= m + 1; j++) {
//				printf("%d ", dataa2[i][j]);
//			}
//			printf("\n");
//		}
//
//		bool flag = false;
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				if (dataa2[i][j] != 0) {
//
//					sum2 = bfs(i, j);
//					flag = true;
//					break;
//				}
//			}
//			if (flag == true) {
//				break;
//			}
//		}
//
//		printf("%d   %d \n", sum, sum2);
//
//		if (sum == 0 && sum2 == 0) {
//			printf("0");
//			zero = true;
//			break;
//			
//		}
//
//
//		if (sum != sum2) {
//			break;
//		}
//
//	
//	}
//	
//	if (zero == false) {
//		printf("%d", lastCnt);
//	}
//	
//	return 0;
//
//}