//#include<stdio.h>
//
//int data[200];
//int strike[200];
//int ball[200];
//int n;
//int main() {
//
//	scanf_s("%d", &n);
//
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d %d %d", &data[i], &strike[i], &ball[i]);
//	}
//
//	
//
//	int lastCnt = 0;
//
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			for (int m = 1; m <= 9; m++) {			
//				if ((i != j && j != m) && (j != m && i != m)) {
//					
//					bool check = false;
//					for (int k = 1; k <= n; k++) {
//						int strikeCnt = 0;
//						int ballCnt = 0;
//						
//						int first = data[k] / 100;
//						int second = (data[k] - first * 100) / 10;
//						int third = (data[k] - first * 100) % 10;
//
//						if (first == i) {
//							strikeCnt++;
//						}
//						if (second == j) {
//							strikeCnt++;
//						}
//						if (third == m) {
//							strikeCnt++;
//						}
//						if (first == j || first == m) {
//							ballCnt++;
//						}
//						if (second == i || second == m) {
//							ballCnt++;
//						}
//						if (third == i || third == j) {
//							ballCnt++;
//						}
//
//						if (strike[k] == strikeCnt && ball[k] == ballCnt) {	
//						}
//						else {
//							check = true;  //같지않은 케이스가 나온경우
//						}
//					}
//					if (check == true) {
//						continue;
//					}
//					else {
//				
//						lastCnt++;
//					}
//				}
//			}
//		}
//	}
//
//	printf("%d", lastCnt);
//
//	return 0;
//}