//#include<cstdio>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//
//void sort(int arr[], int length) {
//
//	for (int i = 1; i <= length - 1; i++) {
//
//		for (int j = i + 1; j <= length; j++) {
//			if (arr[i] >= arr[j]) {
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//
//vector<int> myGrape[100];
//
//int dataa[100][100] = { 0, };
//int result[100] = { 1, };
//int cntt = 1;
//int n,m;
//struct DD {
//	int x;
//	int y;
//};
//
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//int cnt = 1;
//
//int minCnt[1001][1001];
//
//int bfs(int x, int y) {
//	queue<DD> Que;
//
//	DD dd;
//	dd.x = x;
//	dd.y = y;
//	Que.push(dd);
//
//	dataa[x][y] = 1;
//	minCnt[x][y] = 0;
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
//			if (dataa[xx][yy] == 0) {
//				
//				dataa[xx][yy] = 1;
//				DD temp;
//				temp.x = xx;
//				temp.y = yy;
//				Que.push(temp);
//				minCnt[xx][yy] = 1 + minCnt[current.x][current.y];
//			}
//		}
//	}
//
//	return cnt;
//
//}
//
//
//
//int main() {
//
//	
//	
//
//
//	scanf_s("%d %d", &n,&m);
//
//	for (int i = 0; i <= n+1; i++) {
//		dataa[i][0] = 1;
//		dataa[i][m + 1] = 1;
//	}
//	for (int i = 0; i <= m+1; i++) {
//		dataa[0][i] = 1;
//		dataa[n+1][i] = 1;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//		}
//	}
//	//printf("\n");
//	//for (int i =0; i <= n+1; i++) {
//	//	for (int j = 0; j <= m+1; j++) {
//	//		printf("%d ", dataa[i][j]);
//	//	}printf("\n");
//	//}
//	//
//
//	bfs(n, 1);
//
//	printf("%d",minCnt[1][m]); 
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
