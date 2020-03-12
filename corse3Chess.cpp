//#include<stdio.h>
//
//int main() {
//
//	int data[9][9];
//	bool possible = false;
//
//	for (int i = 1; i <= 8; i++) {
//		for (int j = 1; j <= 8; j++) {
//			scanf_s("%d", &data[i][j]);
//		}
//	}
//
//	for (int i = 1; i <= 8; i++) {
//		for (int j = 1; j <= 8; j++) {
//			if (data[i][j] == 1) {
//			
//				//╩С
//				for (int m = i; m >= 1; m--) {
//					if (data[m][j] == 3) {
//						break;
//					}
//					else if (data[m][j] == 2) {
//						possible = true;
//						break;
//					
//					}
//				}
//
//				//го
//				for (int m = i; m <= 8; m++) {
//					if (data[m][j] == 3) {
//						break;
//					}
//					else if (data[m][j] == 2) {
//						possible = true;
//						break;
//
//					}
//				}
//
//				//аб
//				for (int m = j; m >= 1; m--) {
//					if (data[i][m] == 3) {
//						break;
//					}
//					else if (data[i][m] == 2) {
//						possible = true;
//						break;
//
//					}
//				}
//
//				//©Л
//				for (int m = j; m <= 8; m++) {
//					if (data[i][m] == 3) {
//						break;
//					}
//					else if (data[i][m] == 2) {
//						possible = true;
//						break;
//
//					}
//				} 
//			
//			}
//		}
//	}
//
//	if (possible == true) {
//		printf("%d", 1);
//	}
//	else {
//		printf("%d", 0);
//	}
//	
//
//
//	return 0;
//}