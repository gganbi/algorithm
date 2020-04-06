//#include<stdio.h>
//
//int n, m, q;
//int data[1001][1001];
//int tmp[1001][1001] = { 0, };
//int sum[1000010] = { 0, };
//int main() {
//	scanf_s("%d %d %d", &n, &m, &q);
//
//	int ss = 0;
//	for (int i = 0; i < n; i++) {
//	
//		for (int j = 0; j < m; j++) {
//			scanf_s("%d", &data[i][j]);
//			if (i == 0 || j == 0) {
//				tmp[i][j] = data[i][j];
//			}
//		
//		}
//	
//	}
//	tmp[0][0] = data[0][0];
//
//	for (int j = 1; j < m; j++) {
//		tmp[0][j] = (tmp[0][j - 1] + data[0][j]);
//	
//	}
//	for (int j = 1; j < n; j++) {
//		tmp[j][0] = (tmp[j - 1][0] + data[j][0]);
//
//	}
//
//	printf("\n");
//	for (int i = 1; i < n; i++) {
//
//		for (int j = 1; j < m; j++) {
//			tmp[i][j] = tmp[i - 1][j] + tmp[i][j - 1] - tmp[i - 1][j - 1] + data[i][j];
//		}
//
//	}
//	/*printf("\n");
//	for (int i = 0; i < n; i++) {
//
//		for (int j = 0; j < m; j++) {
//		
//	
//			printf("%d ", tmp[i][j]);
//		
//		}printf("\n");
//
//	}
//
//	printf("\n");*/
//	int a, b, c, d;
//	for (int i = 1; i <= q; i++) {
//		scanf_s("%d %d %d %d", &a, &b, &c,&d);
//
//		// c,d - c,d-b  -   a-1,d  +  a-1,b-1
//	//	printf("%d %d %d %d\n", tmp[c][d] , tmp[c][b-1] , tmp[a - 1][d] , tmp[a - 1][b - 1]);
//		printf("%d\n", tmp[c][d]-tmp[c][b - 1]-tmp[a - 1][d]+tmp[a - 1][b - 1]);
//
//	}
//
//}