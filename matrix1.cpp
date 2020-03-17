//#include<stdio.h>
//
//int main() {
//
//	int n;
//	scanf_s("%d", &n);
//
//	int data[11][11] = { 0, };
//
//	//data[1][1] = 1;
//	for (int i = 1; i <= n; i++) {
//		data[i][i] = 1;
//		for (int j = 1; j <= 10; j++) {
//			if (data[i][j] == 0) {
//				data[i][j] = 1;
//			}
//			else {
//				data[i][j] = 0;
//			}
//		}
//		for (int j = 1; j <= 10; j++) {
//			if (data[j][i] == 0) {
//				data[j][i] = 1;
//			}
//			else {
//				data[j][i] = 0;
//			}
//		}
//	}
//
//
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 1; j <= 10; j++) {
//			printf("%d ", data[i][j]);
//		}
//		
//		printf("\n");
//	}
//
//
//	return 0;
//}