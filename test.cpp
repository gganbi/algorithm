//#include<stdio.h>
//
//
//int main() {
//	int t;
//	int n, m;
//	int x, y;
//	int k;
//	int data[101][101] = { {0}, };  //입력데이터
//	char d[101] = { 0, };   //동서남북 
//	int dataA[101]{ 0, }; //회전위치
//	int  dataB[101]{ 0, }; //가는횟수
//	
//
//	int dataK[9] = { 0, };
//	int l;
//	int dx[4] = {0 ,0,1,-1 };
//	int dy[4] = { 1 ,-1,0,0 };
//
//	scanf_s("%d", &t);
//	for (int i = 1; i <= t; i++) {
//		int sum = 0;
//		scanf_s("%d %d %d %d", &n, &m, &y, &x);
//
//		
//		data[x][y] = 0;
//		for (int z = 0; z <= m + 1; z++) {
//			data[z][0] = -1;
//			data[z][n + 1] = -1;
//		}
//		for (int z = 0; z <= n + 1; z++) {
//			data[0][z] = -1;
//			data[m+1][z] = -1;
//		}
//
//		// 원래 입력받은 좌표
//		for (int j = 1; j <= m; j++) {
//			for (int g = 1; g <= n; g++) {
//				scanf_s("%d", &data[j][g]);
//			}
//		}
//		sum += data[x][y];
//		data[x][y] = 0;
//		//회전수열 정보
//		scanf_s("%d", &k);
//		for (int j = 0; j < k; j++) {
//			
//			scanf_s("%d", &dataK[j]);
//
//		}
//
//		//회전정보입력
//		scanf_s("%d", &l); 
//		int tempIndex = 0;
//		for (int j = 1; j <= l; j++) {
//			scanf_s(" %c",&d[j]);
//			scanf_s("%d %d", &dataA[j], &dataB[j]);
//			
//			if (dataB[j] >= k) {
//				dataB[j] %= k;
//			}
//					
//			int temp = 0;
//			int temp2 = 0;
//			if (dataA[j] == 1) { //우측인경우
//				if (tempIndex + dataB[j] > k - 1) {
//					tempIndex = dataB[j] - k + tempIndex;
//				}
//				else {
//					tempIndex += dataB[j];
//				}
//			}
//			else { //좌측인경우
//				if (tempIndex - dataB[j] < 0) {
//					tempIndex = k - (dataB[j] - (tempIndex));
//				}
//				else {
//					tempIndex -= dataB[j];
//				}
//			}
//			int tt = 0;
//			if (d[j] == 'E') {
//
//				
//				for (int h = 1; h <= dataK[tempIndex]; h++) {
//					if (data[x][y + h]!=-1) {
//						sum += data[x][y + h];
//						data[x][y + h] = 0;
//						tt = y + h;
//					}
//					else {
//						tt = y + h - 1;
//						break;
//					}
//				}	
//				y = tt;
//				
//			}else if (d[j] == 'W') {
//				for (int h = 1; h <= dataK[tempIndex]; h++) {
//					if (data[x][y - h] != -1) {
//						sum += data[x][y - h];
//						data[x][y - h] = 0;
//						tt = y - h;
//					}
//					else {
//						tt = y - h +1;
//						break;
//					}
//				}
//				y = tt;
//
//			}else if (d[j] == 'S') {
//				for (int h = 1; h <= dataK[tempIndex]; h++) {
//					if (data[x+h][y] != -1) {
//						sum += data[x+h][y];
//						data[x+h][y] = 0;
//						tt = x + h;
//					}
//					else {
//						tt = x + h - 1;
//						break;
//					}
//				}
//				x = tt;
//
//			}
//			else {
//				for (int h = 1; h <= dataK[tempIndex]; h++) {
//					if (data[x - h][y] != -1) {
//						sum += data[x - h][y];
//						data[x - h][y] = 0;
//						tt = x - h;
//					}
//					else {
//						tt = x - h + 1;
//
//						break;
//					}
//				}
//				x = tt;
//			}
//		
//
//			
//		}
//		printf("#%d %d %d %d\n", i, sum, x, y);
//		
//	}
//
//
//	return 0;
//}