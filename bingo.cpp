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
//	bool temp[27][27] = { {false,} };
//	int bingCount = 0;
//	int tt = 0;
//
//	printf("\n");
//	for (int i = 1; i <= 5; i++) {
//		for (int j = 1; j <= 5; j++) {
//			scanf_s("%d", &input[i][j]);
//		}
//	}
//	printf("\n");
//	int lastSum = 0;
//
//
//	bool tmp1 = false; // /�밢
//	bool tmp2 = false; // �ݴ�밢
//	for (int i = 1; i <= 5; i++) {
//		for (int j = 1; j <= 5; j++) {
//			lastSum++;
//			for (int m = 1; m <= 5; m++) {
//				for (int n = 1; n <= 5; n++) {
//					if (input[i][j] == data[m][n]) {
//
//						if (temp[m][n] == 0) {
//							temp[m][n] = true;
//							printf("\n");
//							printf("%d %d %d\n", m, n, lastSum);
//							for (int i = 1; i <= 5; i++) {
//								for (int j = 1; j <= 5; j++) {
//									printf("%d ", temp[i][j]);
//								}
//								printf("\n");
//							}
//
//
//							//����
//							int bingTmp = 0;
//							for (int k = 1; k <= 5; k++) {
//
//								if (temp[m][k] == 1) {
//									bingTmp++;
//								}
//							}
//							if (bingTmp == 5) {
//								bingCount++;
//							}
//							if (bingCount >= 3) {
//								printf("%d", lastSum);
//								return 0;
//							}
//
//							//����
//							bingTmp = 0;
//							for (int k = 1; k <= 5; k++) {
//
//								if (temp[k][n] == 1) {
//									bingTmp++;
//								}
//							}
//							if (bingTmp == 5) {
//								bingCount++;
//							}
//							
//							if (bingCount >= 3) {
//								printf("%d", lastSum);
//								return 0;
//							}
//							// /�밢
//							if (tmp1 == false) {
//								bingTmp = 0;
//								for (int k = 1; k <= 5; k++) {
//
//									if (temp[6 - k][k] == 1) {
//										bingTmp++;
//
//									}
//								}
//								if (bingTmp == 5) {
//									bingCount++;
//									tmp1 = true;
//								}
//
//								if (bingCount >= 3) {
//									printf("%d", lastSum);
//									return 0;
//								}
//							}
//							
//							// �ݴ�밢
//
//							if (tmp2 == false) {
//								bingTmp = 0;
//								for (int k = 1; k <= 5; k++) {
//
//									if (temp[k][k] == 1) {
//										bingTmp++;
//
//									}
//								}
//								if (bingTmp == 5) {
//									bingCount++;
//									tmp2 = true;
//								}
//								if (bingCount >= 3) {
//									printf("%d", lastSum);
//									return 0;
//								}
//								printf("%d\n", bingCount);
//							}
//						
//						}
//
//					}
//				}
//			}
//		}
//	}
//
//
//
//}