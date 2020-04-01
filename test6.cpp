//#include<stdio.h>
//
//
//int main() {
//	int n, m;
//	int u, d;
//
//	int arr[110][110] = {0,};
//
//	scanf_s("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//
//	int temp = arr[0][0];
//
//	scanf_s("%d %d", &u ,&d);
//
//
//	//아래
//	for (int i = 1; i <= u; i++) {
//		arr[i - 1][0] = arr[i][0];
//	}
//	//왼쪽
//	for (int i = 1; i <= m; i++) {
//		arr[u][i-1] = arr[u][i];
//	}
//	//위
//	for (int i = u-1; i >= 0; i--) {
//		arr[i + 1][m-1] = arr[i][m-1];
//	}
//	//오른쪽
//	for (int i = m - 1; i >= 0; i--) {
//		arr[0][i+1] = arr[0][i];
//	}
//	arr[0][1] = temp;
//
//
//	temp = arr[n-1][0];
//
//
//
//	//아래 
//	for (int i = n - 2; i >= d; i--) {
//		arr[i+1][0] = arr[i][0];
//	}
//
//	//왼쪽
//	for (int i = 1; i <= m - 1; i++) {
//		arr[d][i - 1] = arr[d][i];
//	}
//
//	//위
//	for (int i = d + 1; i <= n - 1; i++) {
//		arr[i - 1][m-1] = arr[i][m - 1];
//	}
//
//	//오른
//	for (int i = m - 2; i >= 0; i--) {
//		arr[n - 1][i + 1] = arr[n - 1][i];
//	}
//	
//	arr[n - 1][1] = temp;
//
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("%d ", arr[i][j]);
//		}printf("\n");
//	}
//
//
//}
//
