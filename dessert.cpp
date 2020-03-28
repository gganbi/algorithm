//#include <stdio.h>
//#include <string.h>
//
//
//int n;
//int count = 0;
//
//char resultChar[100];
//int  resultInt[100];
//bool check[100];
//void  dd(int x) {
//
//	if (x >= n) {
//
//		if (resultChar[x - 1] == '+' || resultChar[x - 1] == '-') {
//			return;
//		}
//		char temp[100];
//		int  tempInt[100];
//		memcpy(tempInt, resultInt, sizeof(resultInt));
//		strcpy_s(temp, resultChar);
//		
//		for (int i = x-2; i >=0; i--) {
//			
//			if (temp[i] == '.') {
//			
//				if (resultInt[i + 1] >= 10) {
//					tempInt[i] = 100 * tempInt[i] + tempInt[i + 1];
//				}
//				else {
//					tempInt[i] = 10 * tempInt[i] + tempInt[i + 1];
//				}
//				tempInt[i + 1] = 0;
//				temp[i] = '+';
//				
//	
//				int tempp = i;
//				int first = 1; //처음 .이 두번이상 될때 나타내주는 flag
//				while (true) {
//					if ((tempp - 1) >= 0 && resultChar[tempp - 1] == '.') {
//						int dotCnt = 1; //자릿수갯수
//						int value = tempInt[tempp];
//
//						while (true) {
//							if (value / 10 >= 1) {
//								dotCnt++;
//								value /= 10;
//							}
//							else {
//								break;
//							}
//						}
//						value = 1;
//						for (int i = 1; i <= dotCnt; i++) {
//							value *= 10;
//						}
//						tempInt[tempp - 1] = value * tempInt[tempp-1] + tempInt[tempp];
//
//							
//						tempInt[tempp] = 0;
//						temp[tempp - 1] = '+';
//						tempp--;
//					}
//					else {
//						break;
//					}
//				}
//				
//
//			}	
//		}
//
//	/*	for(int i = 0; i < n - 1; i++) {
//			printf("%d %c ", resultInt[i], resultChar[i]);
//		}printf("%d", resultInt[n - 1]);
//		printf("\n");
//		for (int i = 0; i < n - 1; i++) {
//			printf("%d %c ", tempInt[i], temp[i]);
//		}printf("%d", tempInt[n - 1]);
//		printf("\n");*/
//	
//		int sum = tempInt[0];
//		for (int i = 0; i < x - 1; i++) {
//			if (temp[i] == '+') {
//				sum += tempInt[i + 1];
//			}
//			else {
//				sum-= tempInt[i + 1];
//			}
//		}
//		if (sum == 0) {
//			count++;
//			if (count > 20) {
//			}
//			else {
//				for (int i = 0; i < n - 1; i++) {
//					printf("%d %c ", resultInt[i], resultChar[i]);
//				}printf("%d", resultInt[n - 1]);
//				printf("\n");
//			}
//		}	
//	}
//	else {	
//		for (int i = 1; i <= 3; i++) {
//			char alpah;
//			if (i == 1) {
//				alpah = '+';
//			}
//			else {
//				alpah = '+' + i;
//			}
//			resultInt[x] = x + 1;
//			resultChar[x] = alpah;
//			dd(x + 1);
//		}
//	}
//}
//int main() {
//
//
//	scanf_s("%d", &n);
//	dd(0);
//	printf("%d", count);
//
//
//}