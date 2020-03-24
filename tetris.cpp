//#include<stdio.h>
//
//
//int c, r;
//int cnt[100] = { 0, };
//int data[25][25] = { {0,}, };
//int main() {
//
//
//	scanf_s("%d %d", &r, &c);
//
//
//	// r: 6 c : 7
//	for (int i = 0; i <= c+1; i++) {
//		data[i][0] = 100;
//		data[i][r + 1] = 100;
//	}
//	for (int i = 0; i <= r + 1; i++) {
//		data[0][i] = 100;
//		data[c+1][i] = 100;
//	}
//	for (int i = 1; i <= c; i++) {
//		for (int j = 1; j <= r; j++) {
//			scanf_s("%d", &data[i][j]);
//		}
//	}
//
//	/*for (int i = 0; i <= c+1; i++) {
//		for (int j = 0; j <= r+1; j++) {
//			printf("%d ",data[i][j]);
//		}printf("\n");
//	}*/
//
//	// r: 6 c : 7
//	for (int i = 1; i <= r; i++) {
//		int cntSero = 0;
//
//		int seroPoint = 0;
//		for (int j = 0; j <= c; j++) {
//			if (data[j + 1][i] != 1) {
//				seroPoint = j+1;
//				cntSero++;
//			}
//			else {
//				break;
//			}
//		}
//		if (cntSero < 4) {
//			continue;
//		}
//		
//		for (int n = seroPoint; n >= 1; n--) {
//			int cntGaro = 0;
//			for (int m = 1; m <= r; m++) {
//				if (data[n][m] == 1) {
//					cntGaro++;
//				}
//			}
//			if (cntGaro == r - 1) {
//				cnt[i]++;
//			}
//		
//		}
//		
//	}
//
//	//for (int i = 1; i <= r; i++) {
//	//	printf("%d ", cnt[i]);
//	//}
//	int tempcnt = 0;
//	for (int i = 1; i <= r; i++) {
//		if (cnt[i] == 0) {
//			tempcnt++;
//		}
//	}
//
//
//
//	if (tempcnt == r) {
//		printf("0 0");
//	}
//	else {
//		int max = cnt[1];
//		int maxIndex = 1;
//		for (int i = 2; i <= r; i++) {
//			if (max <= cnt[i]) {
//				max = cnt[i];
//				maxIndex = i;
//			}
//		}
//
//			printf("%d %d", maxIndex, max);
//
//	}
//
//	return 0;
//}