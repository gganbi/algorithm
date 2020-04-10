//#include<stdio.h>
//#include<stdlib.h>
//
//int T;
//
//int r, c, s, k;
//
//int data[1000][1000] = {0,};
//
//int tmp[1000][1000] = {0,};
//
//int firstX, firstY;
//bool clear = false;
//int main() {
//
//	
//
//
//	scanf_s("%d %d %d %d", &r, &c, &s, &k);
//
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//			scanf_s("%d", &data[i][j]);
//
//			if (data[i][j] == -1 && clear==false) {
//				firstX = i;
//				firstY = j;
//				clear = true;
//			}
//			tmp[i][j] = data[i][j];
//		}
//	}
//	for (int i = 0; i <= r + 1; i++) {
//		data[i][0] = -1;
//		data[i][c + 1] = -1;
//	}
//
//	for (int i = 0; i <= c + 1; i++) {
//		data[0][i] = -1;
//		data[r + 1][i] = -1;
//
//	}
//	
//
//	int temp = 2 * k * k + 2 * k + 1;
//
//	for (int ii = 1; ii <= s; ii++) {
//		for (int i = 1; i <= r; i++) {
//			for (int j = 1; j <= c; j++) {
//				if (data[i][j] < temp) {
//					continue;
//				}
//
//
//				int garoX, garoY, seroX, seroY;
//				if (j - k < 1) {
//					seroX = 1;
//				}
//				else {
//					seroX = j - k;
//				}
//				if (j + k > c) {
//					seroY = c;
//				}
//				else {
//					seroY = j + k;
//				}
//
//				if (i - k < 1) {
//					garoX = 1;
//				}
//				else {
//					garoX = i - k;
//				}
//				if (i + k > c) {
//					garoY = c;
//				}
//				else {
//					garoY = i + k;
//				}
//
//				temp = data[i][j]/temp ;
//
//				int cnt = 0;
//				for (int m = garoX; m <= garoY; m++) {
//					for (int n = seroX; n <= seroY; n++) {
//
//						if (tmp[m][n] == -1) {
//							continue;
//						}
//
//						if ((abs(m - i) + abs(n - j) <= k) && abs(m - i) + abs(n - j) >= 1) {
//							tmp[m][n] += temp;
//							cnt++;
//						}
//					}
//				}
//				tmp[i][j] -= (temp * cnt);
//				for (int i = 1; i <= r; i++) {
//					for (int j = 1; j <= c; j++) {
//						data[i][j] = tmp[i][j];
//					}
//				}
//				printf("\n");
//				for (int i = 1; i <= r; i++) {
//					for (int j = 1; j <= c; j++) {
//						printf("%d ", data[i][j]);
//					}printf("\n");
//				}
//				printf("\n");
//			}
//		}
//	
//	}
//
//	
//	
//
//
//
//}