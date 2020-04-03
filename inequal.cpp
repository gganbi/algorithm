//#include<stdio.h>
//
//
//int k;
//char inequal[100];
//
//char check[100] = {false,};
//int result[100];
//int cnt = 0;
//int minResult[100];
//int maxResult[100];
//
//int max = 1;
//
//void dd(int x) {
//
//	if (x > k) {
//
//		/*for (int i = 0; i < k + 1; i++) {
//			printf("%d", result[i]);
//		}printf(" %d \n", max);*/
//		
//		max = x;
//		cnt++;
//		if (cnt == 1) {
//			for (int i = 0; i <= x; i++) {
//				minResult[i] = result[i];
//			}
//		}
//		for (int i = 0; i <= x; i++) {
//			maxResult[i] = result[i];
//		}
//	}
//	else {
//
//
//		for (int i = 0; i <= 9; i++) {
//			result[x] = i;
//			
//			if (check[i] == false) {
//					
//				
//				if (x == 0) {
//					check[i] = true;
//					dd(x + 1);
//					check[i] = false;
//				}
//				else {
//					if (inequal[x - 1] == '<') {
//						if (result[x - 1] < result[x]) {
//							check[i] = true;
//							dd(x + 1);
//							check[i] = false;
//						}
//					}
//					else {
//						if (result[x - 1] > result[x]) {
//							check[i] = true;
//							dd(x + 1);
//							check[i] = false;
//						}
//					}
//				}	
//			}
//		}
//	}
//
//}
//
//
//int main() {
//
//	scanf_s("%d", &k);
//
//	for (int i = 0; i < k; i++) {
//		scanf_s(" %c", &inequal[i]);
//	}
//
//	
//	dd(0);
//
//
//	for (int i = 0; i < k+1; i++) {
//		printf("%d", minResult[i]);
//	}printf("\n");
//	for (int i = 0; i < k+1; i++) {
//		printf("%d", maxResult[i]);
//	}printf("\n");
//
//}