//#include<cstdio>
//using namespace std;
//
//int map[30][30];
//int dataa[30][30] = { 0, };
//int check[30][30] = { 0, };
//int secondData[30] = { 0, };
//int lastCnt = 0;
//int cnt = 1;
//
//int main() {
//
//	for (int i = 1; i <= 5; i++) {
//		for (int j = 1; j <= 5; j++) {
//			scanf_s("%d", &map[i][j]);
//		}
//	}
//
//	for (int i = 1; i <= 5; i++) {
//		for (int j = 1; j <= 5; j++) {
//			scanf_s("%d", &dataa[i][j]);
//			secondData[cnt++] = dataa[i][j];
//		}
//	}
//	bool lastCheck = false;
//
//	bool first = false;
//	bool second = false;
//	
//	
//	for (int i = 1; i <= 25; i++) {
//		bool checking = false;
//		for (int ii = 1; ii <= 5; ii++) {
//			for (int jj = 1; jj <= 5; jj++) {
//				if (secondData[i] == map[ii][jj]) {
//
//						check[ii][jj] = 1;
//						//¼¼·Î
//						cnt = 0;
//						for (int m = 1; m <= 5; m++) {
//							if (check[m][jj] == 1) {
//								cnt++;
//							}	
//						}
//						if (cnt == 5) {		
//						//	printf(" %d %d \n", i, secondData[i]);
//
//							lastCnt++;
//							
//							if (lastCnt >= 3) {
//								printf("%d", i);
//								lastCheck = true;	
//								break;
//							}
//						}
//						//°¡·Î
//					    cnt = 0;
//						for (int m = 1; m <= 5; m++) {
//							if (check[ii][m] == 1) {
//								cnt++;
//							}
//						}
//						if (cnt == 5) {
//						//	printf(" %d %d \n", i, secondData[i]);
//							
//							lastCnt++;
//							
//							if (lastCnt >= 3) {
//								printf("%d", i);
//								lastCheck = true;
//								break;	
//							}
//						}
//						//¿Þ»ó
//						cnt = 0;
//						for (int m = 1; m <= 5; m++) {
//							if (check[m][m] == 1) {
//								cnt++;
//							}
//						}
//						if (cnt == 5) {
//							if (first == false) {
//						//		printf(" %d %d \n", i, secondData[i]);	
//								first = true;
//								lastCnt++;
//							
//								if (lastCnt >= 3) {
//									printf("%d", i);
//									lastCheck = true;
//									break;
//								}	
//							}		
//						}
//						//¿ÞÇÏ
//						cnt = 0;
//						for (int m = 1; m <= 5; m++) {
//							if (check[5-m+1][m] == 1) {
//								cnt++;
//							}
//						}
//						if (cnt == 5) {
//							if (second == false) {
//							//	printf(" %d %d \n", i, secondData[i]);
//							
//								second = true;
//								lastCnt++;
//
//								if (lastCnt >= 3) {
//									printf("%d", i);
//									lastCheck = true;
//									break;
//
//								}
//							}			
//						}	
//						checking = true;
//						break;
//					
//					
//				}
//			}
//			if (lastCheck == true) {
//				break;
//			}
//			if (checking == true) {
//				break;
//			}
//		}
//
//		if (lastCheck == true) {
//			break;
//		}
//	}
//
//
//
//
//}