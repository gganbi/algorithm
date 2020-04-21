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
//int check[110][110] = { 0, };
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//void DFS(int i,int j) {
//
//	if (dataa[i][j] != 3) {
//		dataa[i][j] = 2;
//	}
//
//	
//	for (int jj = 0; jj < 4; jj++) {
//		int x = i + dx[jj];
//		int y = j + dy[jj];
//
//		if (dataa[x][y] == 1) {
//			dataa[x][y] = 3;
//		}
//
//		if (dataa[x][y] == 0) {
//			dataa[x][y] = 2;
//
//			DFS(x, y);
//		}
//	}
//}
//
//int countt = 0;
//int sum = 0;
//int firstSum = 0;
//
//int ff = 0;
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//			
//		}
//	}
//
//
//	for (int mm = 0; mm <n; mm++) {
//		dataa[mm][0] = 100;
//		dataa[mm][m - 1] = 100;
//	}
//	for (int mm = 0; mm < m ; mm++) {
//		dataa[0][mm] = 100;
//		dataa[n-1][mm] = 100;
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (dataa[i][j] != 100) {
//				ff += dataa[i][j];
//
//			}
//		}
//	}
//	
//
//	while (true) {
//		countt++;
//		for (int i = 1; i < n - 1; i++) {
//			for (int j = 1; j < m - 1; j++) {
//				if (dataa[i][j] == 0) {
//
//					int temp = 0;
//					//	╩С
//					for (int mm = i; mm >= 1; mm--) {
//						if (dataa[mm][j] == 1 || dataa[mm][j] == 3) {
//							temp++;
//							break;
//						}
//					}
//					//	го
//					for (int mm = i; mm <= n - 2; mm++) {
//						if (dataa[mm][j] == 1 || dataa[mm][j] == 3) {
//							temp++;
//							break;
//						}
//					}
//
//					//	аб
//					for (int mm = j; mm >= 1; mm--) {
//						if (dataa[i][mm] == 1 || dataa[i][mm] == 3) {
//							temp++;
//							break;
//						}
//					}
//
//					//	©Л
//					for (int mm = j; mm <= m - 2; mm++) {
//						if (dataa[i][mm] == 1 || dataa[i][mm] == 3) {
//							temp++;
//							break;
//						}
//					}
//
//					if (temp != 4) {
//						DFS(i, j);
//					}
//
//				}
//			}
//		}
//
//		for (int mm = 1; mm <= n - 2; mm++) {
//
//			if (dataa[mm][1] == 1) {
//				dataa[mm][1] = 3;
//			}
//			if (dataa[mm][m - 2] == 1) {
//				dataa[mm][m - 2] = 3;
//			}
//		}
//		for (int mm = 1; mm <= m - 2; mm++) {
//
//			if (dataa[1][mm] == 1) {
//				dataa[1][mm] = 3;
//			}
//			if (dataa[n - 2][mm] == 1) {
//				dataa[n - 2][mm] = 3;
//			}
//		}
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (dataa[i][j] == 3 || dataa[i][j] == 2) {
//					dataa[i][j] = 0;
//				}
//			}
//		}
//
//		firstSum = sum;
//		sum = 0;
//	
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (dataa[i][j] != 100) {
//					sum += dataa[i][j];
//
//				}
//			}
//		}
//	
//		if (sum == 0) {
//			break;
//		}
//	
//	}
//	if (countt == 1) {
//		printf("%d\n%d", countt, ff);
//
//	}else{
//		printf("%d\n%d", countt, firstSum);
//	}
//	
//	
//
//}