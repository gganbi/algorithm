//#include<stdio.h>
//
//int main() {
//
//	int n;
//	int x, y, r;
//	int data[110][110] = {0,};
//
//	scanf_s("%d", &n);
//	scanf_s("%d", &x);
//	scanf_s("%d", &y);
//	scanf_s("%d", &r);
//
//	for (int i = 0; i <= n+1 ;i++) {
//		data[i][0] = 100;
//		data[0][i] = 100;
//		data[n+1][i] = 100;
//		data[i][n+1] = 100;
//	}
//
//	// аб
//	for (int i = 1; i <= r; i++) {
//
//		// ╩С
//		for (int j = 1; j <= r; j++) {
//
//			data[x][y] = i;
//			if (data[x - j][y] != 100) {
//				data[x - j][y] = i+1  ;
//				if (data[x - j][y] > r) {
//					data[x - j][y] = 0;
//				}
//			}
//			else {
//				break;
//			}
//		}
//
//		// го
//		for (int j = 1; j <= r; j++) {
//			if (data[x + j][y] != 100) {
//				data[x + j][y] = i - 1  ;
//				if (data[x - j][y] > r) {
//					data[x - j][y] = 0;
//				}
//			}
//			else {
//				break;
//			}
//		}
//
//		if (data[x][y-i] != 100) {
//			data[x][y-i] = i;
//		}
//		else {
//			break;
//		}
//	}
//
//	// ©Л
//	for (int i = 1; i <= r; i++) {
//
//		// ╩С
//		for (int j = 1; j <= r; j++) {
//			if (data[x - j][y] != 100) {
//				data[x - j][y] = i - 1 + j - 1-1;
//				if (data[x - j][y] > r) {
//					data[x - j][y] = 0;
//				}
//			}
//			else {
//				break;
//			}
//		}
//
//		// го
//		for (int j = 1; j <= r; j++) {
//			if (data[x + j][y] != 100) {
//				data[x + j][y] = i - 1 + j - 1-1;
//				if (data[x - j][y] > r) {
//					data[x - j][y] = 0;
//				}
//			}
//			else {
//				break;
//			}
//		}
//		if (data[x][y + i] !=100) {
//			data[x][y + i] = i;
//		}
//		else {
//			break;
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (i == x && j == y) {
//				printf("* ");
//			}
//			else {
//				printf("%d ", data[i][j]);
//			}
//			
//		}
//		
//		printf("\n");
//	}
//
//	return 0;
//}