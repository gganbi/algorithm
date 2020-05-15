//#include<cstdio>
//
//using namespace std;
//
//
//int n, m;
//int dataa[100][100];
//
//int supu = 0;
//int main() {
//
//
//	scanf_s("%d %d", &m, &n);
//
//
//	int max = 0;
//	int lastValue;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &dataa[i][j]);
//		}
//	}
//	
//	
//	for (int i = 1; i <= m; i++) { // 각  왼쪽에서부터 위치 
//		int cnt = 0;
//		int high = n;
//
//		for (int j = 1; j <= n; j++) {		
//			cnt++;
//			if (dataa[j][i] == 1) {
//				high=cnt -1;
//				break;
//			}
//		}
//
//		int highCnt = 0;//그 위치별 죽인갯수
//		if (high >= 4) {
//			for (int mm = high; mm >= high - 3; mm--) { //해당높이부터 따져줌
//				int cntt = 0;
//				for (int nn = 1; nn <= m; nn++) {
//				
//					if (dataa[mm][nn] == 1) {
//						cntt++;
//					}
//				}
//				if (cntt == m-1) {
//					highCnt++;  
//				}
//			}
//		}
//		else {
//			supu++;
//			for (int mm = high; mm >= 1; mm--) {
//				int cntt = 0;
//				for (int nn = 1; nn <= m; nn++) {
//					if (dataa[mm][nn] == 1) {
//						cntt++;
//					}
//				}
//				if (cntt == m-1) {
//					highCnt++;
//				}
//
//			}
//		
//		}
//		//printf("%d %d\n", i, highCnt);
//		if (max < highCnt) {
//			lastValue = i;
//			max = highCnt;
//
//			
//		}
//		
//	}
//
//	if (supu== m) {
//		max = 0;
//	}
//
//
//	if (max == 0) {
//		printf("%d %d", 0, 0);
//	}
//	else {
//		printf("%d %d", lastValue, max);
//	}
//	
//}