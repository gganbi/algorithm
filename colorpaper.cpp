//#include <stdio.h>
//int main() {
//
//	int n;
//	int cnt[101] = { 0, };
//	
//	int a, b, c, d;
//	int data[101][101] = { {0}, };
//
//
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d %d %d %d", &a,&b,&c,&d);
//
//		for (int j = a; j <a+c; j++) {
//			for (int m = b; m <b+d; m++) {
//				data[j][m] = i + 1;
//			}
//		}
//	}
//
//	for (int j = 0; j < 101; j++) {
//		for (int m = 0; m < 101; m++) {
//			for (int y = 1; y <= n; y++) {
//				if (data[j][m] == y) {
//					cnt[y]++;
//				}
//			}
//		}
//	}
//
//	for (int j = 0; j < n; j++) {
//		printf("%d\n", cnt[j + 1]);
//	}
//
//	return 0;
//}