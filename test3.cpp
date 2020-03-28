//#include<stdio.h>
//
//int n;
//int data[1020] = {0,};
//int main() {
//
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d", &data[i]);
//	}
//	data[0] = -1;
//	data[n + 1] = -1;
//
//	for (int i = 1; i <= n; i++) {
//
//		if (data[i] == 1) {
//
//			if (data[i - 1] == 0) {
//				data[i - 1] = 1;
//			}
//			if (data[i + 1] == 0) {
//				data[i + 1] = 1;
//				i++;
//			}
//		}
//		
//	}
//
//	for (int i = 1; i <= n; i++) {
//		printf("%d ", data[i]);
//	}
//}