//#include<stdio.h>
//
//int n, m;
//int data[200][200];
//int main() {
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf_s("%d", &data[i][j]);
//		}
//	}
//
//	//��
//	int temp = data[1][m];
//	for (int i = m - 1; i >= 1; i--) {
//		data[1][i+1] = data[1][i];
//	}
//	/*printf("\n");
//	printf("������ : \n");
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d ", data[i][j]);
//		}printf("\n");
//	}*/
//
//	//��
//	int temp2 = data[n][m];
//	for (int i = n-1; i >=1; i--) {
//		data[i+1][m] = data[i][m];
//	}
//	data[2][m] = temp;
//
//	//printf("\n");
//	//printf("�Ʒ� �� : \n");
//	//for (int i = 1; i <= n; i++) {
//	//	for (int j = 1; j <= m; j++) {
//	//		printf("%d ", data[i][j]);
//	//	}printf("\n");
//	//}
//	
//	//��
//	int temp3 = data[n][1];
//	for (int i = 2; i <= m; i++) {
//		data[n][i-1] = data[n][i];
//	}
//	data[n][m-1] = temp2;
//
//	/*printf("\n");
//	printf("���� �� : \n");
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d ", data[i][j]);
//		}printf("\n");
//	}*/
//
//	//��
//	int temp4 = data[1][1];
//	for (int i = 2; i <= n; i++) {
//		data[i-1][1] = data[i][1];
//	}
//	data[n-1][1] = temp3;
//
//	printf("\n");
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d ", data[i][j]);
//		}printf("\n");
//	}
//
//
//}