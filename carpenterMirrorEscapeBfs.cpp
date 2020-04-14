//#include<cstdio>
//#include<vector>
//#include<queue>
//#include <string.h> // string.h 파일이 필요합니다
//
//using namespace std;
//
//vector<int> myGrape[100];
//
//int dataa[100][100] = { 0, };
//int tmp[100][100] = { 0, };
//int result[100] = { 1, };
//int cntt = 1;
//int n,m;
//struct DD {
//	int x;
//	int y;
//};
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int cnt = 1;
//
//int minCnt[1001][1001];
//int minCnt2[1001][1001];
//
//int bfs(int x, int y) {
//	queue<DD> Que;
//
//	DD dd;
//	dd.x = x;
//	dd.y = y;
//	Que.push(dd);
//
//	dataa[x][y] = 2;
//	minCnt[x][y] = 0;
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
//			if (dataa[xx][yy] == 0) {
//
//				dataa[xx][yy] = 2;
//				DD temp;
//				temp.x = xx;
//				temp.y = yy;
//				Que.push(temp);
//				minCnt[xx][yy] = 1 + minCnt[current.x][current.y];
//
//				for (int j = 0; j < 4; j++) {
//					int xxx = xx+ dx[j];
//					int yyy = yy+ dy[j];
//					if (dataa[xxx][yyy] == 1) {
//						minCnt[xxx][yyy] = minCnt[xx][yy] + 1;
//						dataa[xxx][yyy] = 2;
//					}
//				}
//			}
//		}
//	}
//	return cnt;
//}
//
//
//
//int main() {
//
//	
//	scanf_s("%d %d", &n,&m);
//
//	for (int i = 0; i <= n+1; i++) {
//		dataa[i][0] = 100;
//		dataa[i][m + 1] = 100;
//	}
//	for (int i = 0; i <= m+1; i++) {
//		dataa[0][i] = 100;
//		dataa[n+1][i] = 100;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//			tmp[i][j] = dataa[i][j];
//		}
//	}
//	
//
//	bfs(n, 1);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			dataa[i][j] = tmp[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			minCnt2[i][j] = minCnt[i][j];
//		}
//	}
//
//	/*printf("\n");
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d ", minCnt2[i][j]);
//		}
//		printf("\n");
//	}*/
//	memset(minCnt, 0, sizeof(minCnt));
//
//	bfs(1, m);
//	/*printf("\n");
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d ", minCnt[i][j]);
//		}
//		printf("\n");
//	}*/
//
//
//	int min = 100000;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (tmp[i][j] == 1 && minCnt[i][j]!=0 && minCnt2[i][j]!=0) {
//				if (minCnt[i][j] + minCnt2[i][j] <=min) {
//
//					//printf("dd  : %d %d \n", i, j);
//					min = minCnt[i][j] + minCnt2[i][j];
//				}
//			}
//		}
//	}
//
//
//
//	printf("%d",min); 
//
//
//
//
//	//for (int i = 1; i < cntt; i++) {
//	//	printf("%d\n", result[i]);
//	//}
//
//
//
//}
