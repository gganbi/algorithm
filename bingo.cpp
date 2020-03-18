//#include <stdio.h>
//
//int main() {
//	
//	int data[27][27];
//
//	for (int i = 1; i <= 5; i++) {
//		for (int j = 1; j <= 5; j++) {
//			scanf_s("%d", &data[i][j]);
//		}
//	}
//
//	int input[27][27];
//
//	bool temp[27][27];
//	int bingCount = 0;
//	int tt = 0;
//
//
//	for (int i = 1; i <= 5; i++) {
//		for (int j = 1; j <= 5; j++) {
//			scanf_s("%d", &input[i][j]);
//		}
//	}
//
//	bool aaa = false;
//	for (int i = 1; i <= 5; i++) {
//		for (int j = 1; j <= 5; j++) {
//			if()
//			temp[i][j] = true;
//			tt++;
//
//			int garoCnt = 0;
//			int seroCnt = 0;
//			for (int m = 1; m <= 5; m++) {
//				if (temp[i][m]==true) {
//					garoCnt++;
//				}
//				if (temp[m][i] == true) {
//					seroCnt++;
//				}
//			}
//			if (garoCnt == 5) {
//				bingCount++;
//			}
//			if (bingCount == 3) {
//				printf("%d\n", tt);
//				aaa = true;
//				break;
//			}
//			if (seroCnt == 5) {
//				bingCount++;
//			}
//			if (bingCount == 3) {
//				printf("%d\n", tt);
//				aaa = true;
//				break;
//			}
//			int tmp1 = 0;
//			if (j == 6 - i) { //
//				for (int m = 1; m <= 5; m++) {
//					if (temp[m][6-m] == true) {
//						tmp1++;
//					}
//				}
//			}
//			int tmp2 = 0;
//			if (i == j) {
//				for (int m = 1; m <= 5; m++) {
//					if (temp[m][m] == true) {
//						tmp2++;
//					}
//				}
//			}
//
//			if (tmp1 == 5) {
//				bingCount++;
//			}
//			if (bingCount == 3) {
//				printf("%d\n", tt);
//				aaa = true;
//				break;
//			}
//			if (tmp2 == 5) {
//				bingCount++;
//			}
//			if (bingCount == 3) {
//				printf("%d\n",tt);
//				aaa = true;
//				break;
//			}	
//		}
//		if (aaa == true) {
//			break;
//		}
//	}
//
//}