//#include<cstdio>
//#include<vector>
//using namespace std;
//
//vector <int> myGrapgh[110];
//bool visited[110][110] = {0,};
//
//
//int n, m;
//int dataa[110][110] = {0,};
//bool check[110][110] = { 0, };
//
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//
//void DFS(int i,int j) {
//	visited[i][j] = true;
//	
//	//printf("%d\n", x);
//
//	for (int jj = 0; jj < 4; jj++) {
//		int x = i + dx[jj];
//		int y = j + dy[jj];
//		if (dataa[x][y] == 1) {
//			check[x][y] = 0;
//		}
//	}
//
//	for (int ii = 0; ii < 4; ii++) {
//		int x = i+dx[ii];
//		int y = j + dy[ii];
//
//		if (visited[x][y] == false) {
//		
//			visited[x][y] = true;
//			DFS(x, y);
//
//		}
//	
//	}
//
//
//}
//
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//		}
//	
//	}
//	
//	/*for (int i = 1; i < n-1; i++) {
//		for (int j = 1; j < m-1; j++) {
//			
//			if (data[i][j] == 1) {
//				for (int m = 0; m < 4; m++) {
//					int x = i + dx[m];
//					int y = j + dy[m];
//					if (data[x][y] == 0) {
//						check[i][j] = 1;
//					}
//				}
//			}
//			
//		}	
//	}*/
//
//	for (int i = 1; i < n-1; i++) {
//		for (int j = 1; j < m-1; j++) {
//			if (dataa[i][j] == 0) {
//				DFS(i, j);
//			}
//		}
//	}
//
//	printf("check\n");
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("%d ", check[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (check[i][j] == 1) {
//				dataa[i][j] = 0;
//			}
//		}
//	}
//
//
//
//
//	//printf("\n");
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < m; j++) {
//	//		printf("%d ", data[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//}