//#include<cstdio>
//#include<queue>
//using namespace std;
//
//int dataa[500][500];
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
//int cnt = 1;
//int bfs(int x, int y) {
//	queue<DD> Que;
//
//	DD dd;
//	dd.x = x;
//	dd.y = y;
//	Que.push(dd);
//
//	dataa[x][y] = 0;
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
//			if (dataa[xx][yy] == 1) {
//				cnt++;
//				dataa[xx][yy] = 0;
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
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//	
//		for (int j = 1; j <= m; j++) {
//		
//			scanf_s("%d", &dataa[i][j]);
//			if (dataa[i][j] != 0) {
//				check[i][j] = true;
//			}
//		}
//	
//	}
////단지번호붙이기 문제 응용해서 풀기!
//	// 구조체 cnt로 풀수도있고 단지번호붙이기문제철검 1, 0 변환하여 풀수도 있다cnt
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (dataa[i][j] != 0) {
//				int cnt = 0;
//				for (int m = 0; m < 4; m++) {
//					int x = i + dx[m];
//					int y = j + dy[m];
//
//					if (dataa[x][y] == 0 && check[x][y]==false) {
//						cnt++;
//					}
//				}
//				if (dataa[i][j] - cnt < 0) {
//					dataa[i][j] = 0;
//				}
//				else {
//					dataa[i][j] -= cnt;
//				}
//			}
//		}
//	}
//	printf("\n");
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d ", dataa[i][j]);
//		}
//		printf("\n");
//	}
//	
//
//
//}