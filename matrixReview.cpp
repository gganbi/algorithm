//#include<stdio.h>
//
//int main() {
//
//	int n;
//	scanf_s("%d", &n);
//
//	int data[11][11] = { 0, };
//
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 1; j <= 10; j++) {
//			scanf_s("%d", &data[i][j]);
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= 10; j++) {
//
//			
//			if (data[i][j] == 0) {// °¡·ÎÂÓ
//				data[i][j] = 1;
//			}
//			else {
//				data[i][j] = 0;
//			}
//			
//			if (data[j][i] == 0) {// ¼¼·ÎÂÓ
//				data[j][i] = 1;
//			}
//			else {
//				data[j][i] = 0;
//			}
//
//			if (i == j) {
//				if (data[i][j] == 0) {// °¡·ÎÂÓ
//					data[i][j] = 1;
//				}
//				else {
//					data[i][j] = 0;
//				}
//			
//			}
//		}
//	}
//
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 1; j <= 10; j++) {
//			printf("%d ", data[i][j]);
//		}
//		printf("\n");
//	}
//}