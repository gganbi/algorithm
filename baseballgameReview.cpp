//#include<cstdio>
//
//
//int n, m, k;
//
//int dataa[120];
//int strike[120];
//int ball[120];
//int n;
//int main() {
//
//	scanf_s("%d", &n);
//
//
//
//	for (int ii = 100; ii <= 999; ii++) {
//
//
//		int first = ii / 100;
//		int second = (ii - first * 100) / 10;
//		int third = ii - first * 100 - second * 10;
//
//		for (int i = 1; i <= n; i++) {
//			int a, b, c;
//			scanf_s("%d %d %d", &a, &b, &c);
//
//
//			int firsttt = a / 100;
//			int secondttt = (a - firsttt * 100) / 10;
//			int thirdttt = a - first * 100 - secondttt * 10;
//			
//			int strikeCnt = 0;
//			int ballCnt = 0;
//
//			if (first == firsttt) {
//				strikeCnt++;
//			}
//
//			if (second == secondttt) {
//				strikeCnt++;
//			}
//			if (third == thirdttt) {
//				strikeCnt++;
//			}
//
//			if (first == secondttt || first == thirdttt) {
//				ballCnt++;
//			}
//
//			if (second == firsttt || first == thirdttt) {
//				ballCnt++;
//			}
//
//			if (third == firsttt || first == secondttt) {
//				ballCnt++;
//			}
//
//
//
//
//
//		}
//	
//	}
//
//
//	
//
//
//	
//
//
//}