//#include<stdio.h>
//
//
//int main() {
//	int n, m;
//	int u, d;
//
//	int arr[110][110];
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
//	//아래
//	for (int i = 0; i < n - 1; i++) {
//		arr[i][0] = arr[i + 1][0];
//	}
//
//	//왼쪽
//	for (int i = 0; i < m - 1; i++) {
//		arr[u - 1][i] = arr[u - 1][i + 1];
//	}
//	
//	//위
//	for (int i = u - 1; i > 0; i--) {
//		arr[i][m - 1]= arr[i - 1][m - 1];
//	}
//
//	//오른쪽
//	for (int i = m - 1; i > 0; i--) {
//		arr[0][i] = arr[0][i - 1];
//	}
//
//	arr[0][1] = temp;
//
//
//	//
//	//temp = arr[0][0];
//	////아래
//	//for (int i = d; i < n - 1; i++) {
//	//	arr[i][0] = arr[i + 1][0];
//	//}
//
//	////왼쪽
//	//for (int i = 0; i < m - 1; i++) {
//	//	arr[d][i] = arr[d][i + 1];
//	//}
//
//	////위
//	//for (int i = d; i > 0; i--) {
//	//	arr[i][m - 1] = arr[i - 1][m - 1];
//	//}
//
//	////오른쪽
//	//for (int i = m - 1; i > 0; i--) {
//	//	arr[d][i] = arr[d][i - 1];
//	//}
//
//	//arr[0][1] = temp;
//
//
//
//
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
//
//
////int temp = arr[0][0];
//////아래
////for (int i = 0; i < n - 1; i++) {
////	arr[i][0] = arr[i + 1][0];
////}
////
//////왼쪽
////for (int i = 0; i < m - 1; i++) {
////	arr[n - 1][i] = arr[n - 1][i + 1];
////}
////
//////위
////for (int i = n - 1; i > 0; i--) {
////	arr[i][m - 1] = arr[i - 1][m - 1];
////}
////
//////오른쪽
////for (int i = m - 1; i > 0; i--) {
////	arr[0][i] = arr[0][i - 1];
////}
////
////arr[0][1] = temp;