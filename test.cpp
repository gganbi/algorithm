//#include<stdio.h>
//
//int n, m, q;
//int f, x, y;
//int data[1010][1010];
//
//void push(int f, int a) {
//
//
//	//f번째수열
//	// 오른쪽
//	if (a == 1) {
//		int temp = data[f][m];
//		for (int i = m - 1; i >= 1; i--) {
//			data[f][i + 1] = data[f][i];
//		}
//		data[f][1] = temp;
//	}
//	else {//왼쪽
//		int temp = data[f][1];
//		for (int i = 2; i <= m; i++) {
//			data[f][i -1] = data[f][i];
//		}
//		data[f][m] = temp;
//	}
//}
//
//int main() {
//
//	
//	scanf_s("%d %d %d", &n, &m, &q);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &data[i][j]);
//		}
//	}
//
//
//	for (int i = 1; i <= q; i++) {
//	
//		
//		scanf_s("%d %d %d", &f, &x, &y);
//		f = f + 1;
//
//		if (y >= m) {
//			y %= m;
//		}
//
//		//f번째 수열
//		// x 1: 오른쪽 2: 왼쪽
//		for (int j = 1; j <= y; j++) {
//			push(f,x);
//		}
//		for (int j = 1; j <= m; j++) {
//			printf("%d ", data[f][j]);
//		}printf("\n");
//
//		
//	}
//
//}