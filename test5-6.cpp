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
//struct defusul {
//	int x;
//	int y;
//	int cnt;
//
//};
//int k, t;
//
//
//int cnt = 1;  //µðºäÀú°¹¼ö.
//
//int lastCnt = 0; //¿øÇÏ´Â ¹øÂ°
//
//int result[100] = {0,};
//bool check[100] = { false, };
//defusul dData[120];
//
//void getResult(int x) {
//	if (x >= k) {
//
//		bool tmp = false;
//		for (int i = k-2; i>=0; i--) {
//			if (result[i] > result[i + 1]) {
//				tmp = true;
//			}
//		}
//		if (tmp == true) {
//			return;
//		}
//
//
//		lastCnt++;
//		if (lastCnt == t) {
//		
//			for (int i = 0; i <k; i++) {
//				//printf("%d ", result[i]);
//				printf("%d %d", dData[result[i]].x, dData[result[i]].y);
//				printf("\n");
//			}
//			
//			return;
//			//¿©±â¼­ »Ñ·ÁÁÜ
//		
//		}
//
//		/*for (int i = 0; i < k; i++) {
//			printf("%d \n", lastCnt);
//			printf("%d %d %d", result[i], dData[result[i]].x, dData[result[i]].y);
//			printf("\n");
//		}
//		
//		printf("\n");*/
//		return;
//	}
//
//	for (int i = 1; i <= cnt-1; i++) {
//		if (check[i] == false) {
//			result[x] = i;
//			check[i] = true;
//			getResult(x + 1);
//			check[i] = false;
//		}
//	}
//
//}
//
//
//int main() {
//
//	scanf_s("%d %d %d %d", &n, &m,&k,&t);
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//			if (dataa[i][j] == 2) {
//				dData[cnt].x = i;
//				dData[cnt].y = j;
//			//	dData[cnt].cnt = cnt;
//				cnt++;	
//			}	
//		}
//	}
//	
//	getResult(0);
//	/*for (int i = 0; i <= n + 1; i++) {
//		dataa[i][0] = 100;
//		dataa[i][m + 1] = 100;
//	}
//	for (int i = 0; i <= m + 1; i++) {
//		dataa[0][i] = 100;
//		dataa[n + 1][i] = 100;
//
//	}
//*/
//
//
//
//}