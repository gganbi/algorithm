//#include<stdio.h>
//
//
//int data[1100][1100] = {0,};
//
//int n, k, t;
//int main() {
//
//	scanf_s("%d %d %d", &n,&k,&t);
//	int a, b,c;
//
//	int cnt = 0;
//
//	int xData = 1;
//	int yData = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d %d %d", &a, &b,&c);
//		if (data[a][b] != 0) {
//			if (data[a][b] < c) {
//				sum -= data[a][b];
//				data[a][b] = c;
//				sum += c;
//
//			}
//		}
//		else {
//			data[a][b] = c;
//			sum += c;
//		}
//	}
//
//	for (int i = 1; i <= t; i++) {
//
//	
//		for (int j = 1; j <=k; j++) {
//			scanf_s("%d %d %d", &a, &b, &c);
//			if (data[a][b] != 0) {
//				if (data[a][b] < c) {
//					sum -= data[a][b];
//					data[a][b] = c;
//					sum += c;
//					
//				}
//			}
//			else {
//				data[a][b] = c;
//				sum += c;
//			}	
//		}
//		printf("%d\n", sum);
//	
//	}
//
//	return 0;
//
//}