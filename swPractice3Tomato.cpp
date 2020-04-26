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
//
//int lastcnt = 1;
//
//int cntttt = 0;
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
//				lastcnt++;
//				if (lastcnt == cntttt) {
//					printf("%d", cur.cnt + 1);
//					return;
//				}
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
//		/*if (cnt == m * n * h) {
//			printf("%d", cur.cnt + 1);
//			return;
//		}*/
//	}
//
//	if (cntttt != lastcnt) {
//	 // 이런 범위갯수!! 큐 다빠져나간상태에서 첨갯수와 비교해주면됨!
//		printf("-1");
//		return;
//	
//	}
//
//
//}
//int main() {
//
//	scanf_s("%d %d %d",&m,&n,&h);
//
//
//	for (int i = 1; i <= h; i++) {
//		for (int j = 1; j <= n; j++) {
//		
//			for (int k = 1; k <= m; k++) {
//				scanf_s("%d",&dataa[j][k][i]);	
//				if (dataa[j][k][i] == 0) {
//					dataa[j][k][i] = 100;
//					cntttt++;
//				}
//			}
//		}
//	}
//
//	bool check = false;
//
//	if (cntttt == 0) {
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
//		
//	    bfs();
//	
//	
//		
//		
//	}
//
//
//}