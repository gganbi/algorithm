//#include<stdio.h>
//
//
//int n, r;
//
//char result[100];
//
//void getResult(int x) {
//
//	if (x >= r) {
//
//		for (int i = 0; i <r; i++) {
//			printf("%c", result[i]);
//		}
//		printf("\n");
//
//		return;
//	
//	}
//
//	for (int i = 0; i < n; i++) {
//	
//		char alpah = i + 'a';
//
//		result[x] = alpah;
//
//		getResult(x + 1);
//	}
//
//
//}
//
//int main() {
//
//	scanf_s("%d %d", &n, &r);
//
//	getResult(0);
//
//
//
//
//}