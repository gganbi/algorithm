//#include<stdio.h>
//
//
//int n;
//
//
//
//int result[20];
//
//void getResult(int x) {
//
//	if (x >= n) {
//		
//		for (int i = 0; i < n; i++) {
//			printf("%d ", result[i]);
//		}
//		printf("\n");
//
//		return;
//	}
//
//	for (int i = 0; i < 2; i++) {
//		result[x] = i;
//
//		getResult(x + 1);
//	}
//	
//
//}
//
//int main() {
//	scanf_s("%d", &n);
//
//	getResult(0);
//
//
//}