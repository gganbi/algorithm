//#include<stdio.h>
//int data[1001][1001];
//bool check[1001][1001];
//int main() {
//	int r, c, k;
//	scanf_s("%d %d %d", &r, &c, &k);
//	
//	for (int i = 0; i <= r + 1; i++) {
//		check[i][0] = true;
//		check[i][c + 1] = true;
//	}
//	for (int i = 0; i <= c + 1; i++) {
//		check[0][i] = true;
//		check[r+1][i] = true;
//	}
//
//	
//	if (r * c < k) {
//		printf("0");
//		return 0;
//	}
//
//	int cnt = 1;
//
//	// 우선 값 다 넣고 나서 
//	// 다시 돌면서 k값 나타내는항 찾기
//
//	int tempx = 1;
//	int tempy = 1;
//	while (true) {
//
//		if (cnt >= r * c) {
//			break;
//		}
//		
//		// 오른
//		for (int i = tempy; i <= c; i++) {
//			data[tempx][i] = cnt;
//			if (cnt == k) {
//				printf("%d %d\n", tempx, i);
//				return 0;
//			}
//			cnt++;
//			check[tempx][i] = true;
//			if (check[tempx][i + 1] == true) {
//				cnt--;
//				tempy = i;
//				break;
//			}
//		}
//
//		// 아래
//		for (int i = tempx; i<= r; i++) {
//			data[i][tempy] = cnt;
//			if (cnt == k) {
//				printf("%d %d\n", i, tempy);
//				return 0;
//			}
//			cnt++;
//			check[i][tempy] = true;
//			if (check[i+1][tempy] == true) {
//				cnt--;
//				tempx = i;
//				break;
//			}
//		}
//
//		// 왼쪽
//		for (int i = tempy; i >= 1; i--) {
//			data[tempx][i] = cnt;
//			if (cnt == k) {
//				printf("%d %d\n", tempx, i);
//				return 0;
//			}
//			cnt++;
//			check[tempx][i] = true;
//			if (check[tempx][i-1] == true) {
//				cnt--;
//				tempy = i;
//				break;
//			}
//		}
//
//		// 위
//		for (int i = tempx; i >= 1; i--) {
//			data[i][tempy] = cnt;
//			if (cnt == k) {
//				printf("%d %d\n", i, tempy);
//				return 0;
//			}
//			cnt++;
//			check[i][tempy] = true;
//			if (check[i - 1][tempy] == true) {
//				cnt--;
//				tempx = i;
//				break;
//			}
//		}
//	}
//
//	for (int i = 1; i <= r ; i++) {
//		for (int j = 1; j <= c; j++) {
//			printf("%d ", data[i][j]);
//		}printf("\n");
//	}
//
//
//}