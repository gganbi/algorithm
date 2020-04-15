//#include<stdio.h>
//
//
//int data[110][110];
//int main() {
//
//	int a;
//
//	scanf_s("%d", &a);
//
//	int cnt = 1;
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1; j <= i; j++) {
//			data[j][i-j+1] = cnt++;
//		}
//	}
//
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1; j <= a; j++) {
//			if (data[i][j] != 0) {
//				printf("%d ", data[i][j]);
//			}	
//		}printf("\n");
//	}
//
//
//
//}