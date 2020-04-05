//#include<stdio.h>
//
//int n;
//int data[110][110] = {0,};
//int main() {
//
//
//	scanf_s("%d", &n);
//	int a, b;
//
//	int cnt = 1;
//
//	int xData = 1;
//	int yData = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		scanf_s("%d %d", &a, &b);
//		if (data[a][b] != 0) {
//			if (data[a][b] >cnt) {
//				sum -= data[a][b];
//				data[a][b] = cnt;	
//				sum += data[a][b];
//			}
//			else {
//				
//			}
//		}
//		else {
//			data[a][b] = cnt;
//			sum += cnt;
//		}
//		
//		cnt++;
//	}
//
//	printf("%d", sum);
//
//}