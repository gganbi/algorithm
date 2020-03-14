//#include<stdio.h>
//
//
//
//int main() {
//
//	int n,m, q;
//	int data[101];
//
//	int tempN[101] = { 0, };
//	int tempY[101] = { 0, };
//
//	scanf_s("%d %d", &n, &q);
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &data[i]);
//	}
//
//	for (int i = 0; i < q; i++) {
//		scanf_s("%d %d", &tempN[i], &tempY[i]);
//	}
//	int tempIndex = 0;
//	for (int i = 0; i < q; i++) {
//
//		if (tempY[i] > n) {
//			tempY[i] %= n;
//		}
//
//		if (tempN[i] == 1) {
//
//			int tempIndex2 = 0;
//			for (int j = 1; j <= tempY[i]; j++) {
//				if (tempIndex + j > n - 1) {
//					tempIndex = 0;
//					tempIndex2 = 0;
//				}
//				else {
//					tempIndex2++;
//				}
//			}
//			tempIndex += tempIndex2;
//			printf("%d\n", data[tempIndex]);
//		}
//		else {
//			int tempIndex2 = 0;
//			for (int j = 1; j <= tempY[i]; j++) {
//				if (tempIndex - j < 0) {
//					tempIndex = n - 1;
//					tempIndex2 = 0;
//				}
//				else {
//					tempIndex2++;
//				}
//			}
//			tempIndex -= tempIndex2;
//			printf("%d\n", data[tempIndex]);
//		}
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