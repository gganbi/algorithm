//#include<cstdio>
//#include<queue>
//
//using namespace std;
//
//int n, m, h;
//
//int dataa[200][200][200];
//
//struct dataset {
//	int x;
//	int y;
//	int z;
//	int cnt;
//};
//
//int dx[6] = { -1,1,0,0,0,0 };
//int dy[6] = { 0,0,-1,1,0,0, };
//int dz[6] = { 0,0,0,0,1,-1 };
//
//void bfs() {
//	queue<dataset> myQue;
//
//	for (int i = 1; i <= h; i++) {
//		for (int j = 1; j <= n; j++) {
//			for (int k = 1; k <= m; k++) {
//				if (dataa[j][k][i] == 1) {
//					dataset first;
//					first.x = j;
//					first.y = k;
//					first.z = i;
//					first.cnt = 0;
//					myQue.push(first);;
//				}
//			}
//		}
//	}
//	
//
//
//	while (!myQue.empty()) {
//
//		dataset cur = myQue.front();
//		myQue.pop();
//
//		for (int i = 0; i < 6; i++) {
//
//			int xx = cur.x + dx[i];
//			int yy = cur.y + dy[i];
//			int zz = cur.z + dz[i];
//
//			if (dataa[xx][yy][zz] == 100) {
//				dataa[xx][yy][zz] = 1;
//				dataset tmp;
//				tmp.x = xx;
//				tmp.y = yy;
//				tmp.z = zz;
//				tmp.cnt = cur.cnt + 1;
//				myQue.push(tmp);
//			}
//		}
//
//		int cnt = 0;
//		for (int i = 1; i <= h; i++) {
//			for (int j = 1; j <= n; j++) {
//				for (int k = 1; k <= m; k++) {
//					if (dataa[j][k][i] == 1) {
//						cnt++;
//					}	
//				}	
//			}
//		}
//
//			printf("\n");
//
//		for (int i = 1; i <= h; i++) {
//			for (int j = 1; j <= n; j++) {
//				for (int k = 1; k <= m; k++) {
//					printf("%d ", dataa[j][k][i]);
//				}
//				printf("\n");
//			}
//			printf("\n");
//		}
//
//		if (cnt == m * n * h) {
//			printf("%d", cur.cnt + 1);
//			return;
//		}
//		
//
//	}
//
//
//}
//int main() {
//
//	scanf_s("%d %d %d",&m,&n,&h);
//
//	int cnt = 0;
//	for (int i = 1; i <= h; i++) {
//		for (int j = 1; j <= n; j++) {
//		
//			for (int k = 1; k <= m; k++) {
//				scanf_s("%d",&dataa[j][k][i]);	
//				if (dataa[j][k][i] == 0) {
//					dataa[j][k][i] = 100;
//					cnt++;
//				}
//			}
//		}
//	}
//
//	bool check = false;
//
//	if (cnt == 0) {
//
//		printf("0");
//	}
//	else {
//
//		printf("\n");
//
//		for (int i = 1; i <= h; i++) {
//			for (int j = 1; j <= n; j++) {
//				for (int k = 1; k <= m; k++) {
//					printf("%d ", dataa[j][k][i]);
//				}
//				printf("\n");
//			}
//			printf("\n");
//			printf("\n");
//		}
//
//		for (int i = 1; i <= h; i++) {
//			for (int j = 1; j <= n; j++) {
//
//				for (int k = 1; k <= m; k++) {
//					int cnt = 0;
//					if (dataa[j][k][i] == 100) {
//						
//						/*for (int iii = 0; iii < 6; iii++) {
//						
//							int x = j + dx[iii];
//							int y = k + dy[iii];
//							int z = i + dz[iii];
//
//							if (dataa[x][y][z] == 0 || dataa[x][y][z] == -1) {
//								cnt++;
//							}
//						}*/
//						int x = j + dx[0];
//						int y = k + dy[0];
//						int z = i + dz[0];
//						if (dataa[x][y][z] == 0 || dataa[x][y][z] == -1) {
//							cnt++;
//						}
//						 x = j + dx[1];
//						 y = k + dy[1];
//						 z = i + dz[1];
//						if (dataa[x][y][z] == 0 || dataa[x][y][z] == -1) {
//							cnt++;
//						}
//						 x = j + dx[2];
//						 y = k + dy[2];
//						 z = i + dz[2];
//						if (dataa[x][y][z] == 0 || dataa[x][y][z] == -1) {
//							cnt++;
//						}
//						 x = j + dx[3];
//						 y = k + dy[3];
//						 z = i + dz[3];
//						if (dataa[x][y][z] == 0 || dataa[x][y][z] == -1) {
//							cnt++;
//						}
//						 x = j + dx[4];
//						 y = k + dy[4];
//						 z = i + dz[4];
//						if (dataa[x][y][z] == 0 || dataa[x][y][z] == -1) {
//							cnt++;
//						}
//						 x = j + dx[5];
//						 y = k + dy[5];
//						 z = i + dz[5];
//						if (dataa[x][y][z] == 0 || dataa[x][y][z] == -1) {
//							cnt++;
//						}
//
//						
//					}
//
//					if (cnt == 6) {
//						
//						check = true;
//						break;
//						//return;
//					}
//				}
//
//				if (check == true) {
//					break;
//				}
//			}
//			if (check == true) {
//				break;
//			}
//		}
//
//		if (check == false) {
//			bfs();
//		}
//		else {
//			printf("-1");
//		}
//		
//		
//	}
//
//
//}